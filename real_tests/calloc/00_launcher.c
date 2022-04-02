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

int	calloc_launcher(void)
{
	t_list	tests;

	lst_init(&tests, free);
	load_test(&tests, "Short calloc", calloc_short_size);
	load_test(&tests, "Long calloc", calloc_long_size);
	load_test(&tests, "null calloc", calloc_null_size);
	return (launch_tests(&tests, "CRASH"));
}
