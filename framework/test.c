/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:22:45 by scros             #+#    #+#             */
/*   Updated: 2022/04/02 11:22:47 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	init_test(t_test *test, char *category, t_list *tests)
{
	test->category = category;
	test->tests = tests;
	test->fp = fopen("test.log", "w+");
	if (!test->fp)
		return ;
}

static void	handler(int signum)
{
	(void)signum;
	exit(254);
}

static void	launch_test(t_unit_test *current)
{
	if (fork() == 0)
	{
		signal(SIGALRM, handler);
		alarm(TIMEOUT);
		exit(current->function());
	}
	wait(&current->status);
}

int	launch_tests(t_list *tests, char *category)
{
	int		passed;
	t_test	test;

	init_test(&test, category, tests);
	lst_foreach(tests, (t_consumer)launch_test);
	lst_foreachp(tests, (t_biconsumer)out_log_test, &test);
	passed = lst_count(tests, (t_predicate)test_passed);
	out_log_tests(&test, passed);
	lst_clear(tests);
	fclose(test.fp);
	if (passed == tests->size)
		return (0);
	return (-1);
}

void	load_test(t_list *tests, char *test_name, int (*function)(void))
{
	t_unit_test	*test;

	test = malloc(sizeof(t_unit_test));
	if (!test)
		return ;
	test->name = test_name;
	test->function = function;
	test->status = 0;
	lst_push(tests, test);
}
