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

int	default_launcher(void)
{
	t_list	tests;

	lst_init(&tests, free);
	load_test(&tests, "Segmentation fault", default_sigsegv_test);
	load_test(&tests, "Bus error", default_sigbus_test);
	load_test(&tests, "OK", default_ok_test);
	load_test(&tests, "KO", default_ko_test);
	return (launch_tests(&tests, "DEFAULT"));
}
