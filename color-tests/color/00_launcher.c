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
#include "color_tests.h"

int	color_launcher(void)
{
	t_list	tests;

	lst_init(&tests, free);
	load_test(&tests, "Segmentation fault", color_sigsegv_test);
	load_test(&tests, "OK", color_ok_test);
	load_test(&tests, "KO", color_ko_test);
	load_test(&tests, "Timeout", color_timeout_test);
	return (launch_tests(&tests, "COLORS"));
}
