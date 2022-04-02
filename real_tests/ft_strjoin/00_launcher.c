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
#include "tests.h"

int	strjoin_launcher(void)
{
	t_list	tests;

	lst_init(&tests, free);
	load_test(&tests, "Big String test", strjoin_bigstring_test);
	load_test(&tests, "Two Null String test", strjoin_null_test);
	return (launch_tests(&tests, "STRJOIN"));
}
