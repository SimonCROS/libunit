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

void	out_log_tests(t_test *test, int passed)
{
	int	total;

	total = test->tests->size;
	ft_putendl("");
	ft_putnbr(passed);
	ft_putstr("/");
	ft_putnbr(total);
	ft_putendl(" tests passed");
	if (test->fp)
		fprintf(test->fp,
			"\n%d/%d tests passed\n"
			"%d/%d tests terminated by a signal\n",
			passed, total,
			lst_count(test->tests, (t_predicate)test_terminated), total);
}

void	out_log_test(t_unit_test *current, t_test *test)
{
	char	*res;

	res = get_res_string(current->status);
	ft_putstr(test->category);
	ft_putstr(" : ");
	ft_putstr(current->name);
	ft_putstr(" : [");
	ft_putstr(res);
	ft_putendl(RESET"]");
	if (test->fp)
		fprintf(test->fp, "%s : %-18s : [%s]\n",
			test->category, current->name, res + 5);
}

int	test_passed(t_unit_test *test)
{
	return (test->status == 0);
}

int	test_terminated(t_unit_test *test)
{
	return (WIFSIGNALED(test->status));
}

char	*get_res_string(int status)
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
		else if (WTERMSIG(status) == SIGALRM)
			return (GREY"TIMEOUT");
	}
	else if (WEXITSTATUS(status) == 0)
		return (GREEN"OK");
	else if (WEXITSTATUS(status) == 254)
		return (GREY"TIMEOUT");
	return (YELLOW"KO");
}
