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
#include "logs_tests.h"

int	logs_launcher(void)
{
	t_list	tests;

	lst_init(&tests, free);
	load_test(&tests, "Segmentation fault", logs_sigsegv_test);
	load_test(&tests, "Bus error", logs_sigbus_test);
	load_test(&tests, "OK", logs_ok_test);
	load_test(&tests, "KO", logs_ko_test);
	return (launch_tests(&tests, "LOGS"));
}
