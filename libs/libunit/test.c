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

// TO RM
#    include <stdio.h>

static char	*get_res_string(int res)
{
	if (res == 0)
		return (" : [OK]");
	else if (res == 11)
		return (" : [SIGSEGV]");
	else if	(res == 7)
		return (" : [SIGBUS]");
	else if	(res == 6)
		return (" : [SIGABRT]");
	else if	(res == 8)
		return (" : [SIGFPE]");
	else if	(res == 13)
		return (" : [SIGPIPE]");
	else if (res == 4)
		return (" : [SIGILL]");
	return (" : [KO]");
}

static void	launch_test(t_unit_test *test) {
	if (fork() == 0)
		exit(test->function());
	wait(&test->passed);
	ft_putstr(test->category);
	ft_putstr(" : ");
	ft_putstr(test->name);
	ft_putstr(" : [");
	ft_putstr(get_res_string(test->passed));
	ft_putendl("]");
}

static int	test_passed(t_unit_test *test) {
	return test->passed == 0;
}

int	launch_tests(t_list *tests)
{
	int		total;
	int		passed;

	lst_foreach(tests, (t_consumer)launch_test);
	total = tests->size;
	passed = lst_count(tests, (t_predicate)test_passed);
	printf("\n%d/%d tests checked\n", passed, total);
	return (passed == total);
}

void	load_test(t_list *tests, char *test_name, int (*function)(void))
{
	t_unit_test	*test;

	test = malloc(sizeof(t_unit_test));
	if (!test)
		return ;
	test->category = NULL;
	test->name = test_name;
	test->function = function;
	test->passed = 0;
	lst_push(tests, test);
}
