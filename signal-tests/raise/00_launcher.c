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
#include "signal_tests.h"

int	raise_launcher(void)
{
	t_list	tests;

	lst_init(&tests, free);
	load_test(&tests, "Segmentation fault", raise_sigsegv_test);
	load_test(&tests, "Bus error", raise_sigbus_test);
	load_test(&tests, "Abort", raise_sigabrt_test);
	load_test(&tests, "Floating point exception", raise_sigfpe_test);
	load_test(&tests, "Broken pipe", raise_sigpipe_test);
	load_test(&tests, "Illegal instruction", raise_sigill_test);
	return (launch_tests(&tests, "SIGNAL"));
}
