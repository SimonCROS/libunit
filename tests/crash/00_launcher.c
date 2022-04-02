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

int	crash_launcher(void)
{
	t_list	tests;

	lst_init(&tests, free);
	load_test(&tests, "Segmentation fault", crash_sigsegv_test);
	load_test(&tests, "Sig Abort", crash_sigabrt_test);
	load_test(&tests, "ok test", crash_ok_test);
	load_test(&tests, "ko test", crash_ko_test);
	return (launch_tests(&tests, "CRASH"));
}