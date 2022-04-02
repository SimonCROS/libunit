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

static void	launch_test(t_unit_test *test) {
	ft_putendl(test->name);
}

static int	test_passed(t_unit_test *test) {
	printf("%s, %d\n", test->name, test->passed);
	return test->passed;
}

int	launch_tests(t_list *tests)
{
	lst_foreach(tests, (t_consumer)launch_test);

	int total = tests->size;
	t_list *good = lst_filter(tests, (t_predicate)test_passed);
	int passed = good->size;
	lst_free(good);

	printf("%d/%d\n", passed, total);

	lst_clear(tests);
	return (EXIT_SUCCESS);
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
	test->passed = FALSE;
	lst_push(tests, test);
}
