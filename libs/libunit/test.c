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

static void	launch_test(t_unit_test *test) {
	ft_putendl(test->name);
}

int	launch_tests(t_list *tests)
{
	lst_foreach(tests, (t_consumer)launch_test);

	lst_clear(tests);
	return (EXIT_SUCCESS);
}

void	load_test(t_list *tests, char *test_name, int (*function)(void))
{
	t_unit_test	*test;

	test = malloc(sizeof(test));
	if (!test)
		return ;
	test->category = NULL;
	test->name = test_name;
	test->function = function;
	test->passed = FALSE;
	lst_push(tests, test);
}
