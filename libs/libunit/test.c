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

static char	*get_res_string(int status)
{
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			return (RED"SIGSEGV");
		else if (WTERMSIG(status) == SIGBUS)
			return (RED"SIGBUS");
		else if (WTERMSIG(status) == SIGABRT)
			return (RED"SIGABRT");
		else if (WTERMSIG(status) == SIGFPE)
			return (RED"SIGFPE");
		else if (WTERMSIG(status) == SIGPIPE)
			return (RED"SIGPIPE");
		else if (WTERMSIG(status) == SIGILL)
			return (RED"SIGILL");
	}
	else if (status == 0)
		return (GREEN"OK");
	return (YELLOW"KO");
}

static void	launch_test(t_unit_test *test, char *category)
{
	if (fork() == 0)
		exit(test->function());
	wait(&test->status);
	ft_putstr(category);
	write(1, "                  ", fmini(6, 6 - ft_strlen(category)));
	ft_putstr(" : ");
	ft_putstr(test->name);
	write(1, "                  ", fmini(18, 18 - ft_strlen(test->name)));
	ft_putstr(" : [");
	ft_putstr(get_res_string(test->status));
	ft_putendl(RESET"]");
}

static int	test_passed(t_unit_test *test)
{
	return (test->status == 0);
}

int	launch_tests(t_list *tests, char *category)
{
	int		total;
	int		passed;

	lst_foreachp(tests, (t_biconsumer)launch_test, category);
	total = tests->size;
	passed = lst_count(tests, (t_predicate)test_passed);
	ft_putendl("");
	ft_putnbr(passed);
	ft_putstr("/");
	ft_putnbr(total);
	ft_putendl(" tests checked");
	if (passed == total)
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
