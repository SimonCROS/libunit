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
#include "real_tests.h"

int	strjoin_launcher(void)
{
	t_list	tests;

	lst_init(&tests, free);
	load_test(&tests, "Basic test    ", strjoin_basic_test);
	load_test(&tests, "Null test     ", strjoin_null_test);
	load_test(&tests, "Long test     ", strjoin_long_test);
	load_test(&tests, "Strange test  ", strjoin_strange_test);
	load_test(&tests, "Short test    ", strjoin_short_test);
	load_test(&tests, "Null test 2   ", strjoin_null2_test);
	load_test(&tests, "Null test 3   ", strjoin_null3_test);
	load_test(&tests, "Null test 4   ", strjoin_null4_test);
	load_test(&tests, "Null test 5   ", strjoin_null5_test);
	load_test(&tests, "Null test 6   ", strjoin_null6_test);
	load_test(&tests, "Basic test 2  ", strjoin_basic2_test);
	load_test(&tests, "Basic test 3  ", strjoin_basic3_test);
	load_test(&tests, "Basic test 4  ", strjoin_basic4_test);
	load_test(&tests, "unicode test  ", strjoin_unicode_test);
	load_test(&tests, "unicode test 2", strjoin_unicode2_test);
	return (launch_tests(&tests, "STRJOIN"));
}
