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
#include "timeout_tests.h"

int	timeout_launcher(void)
{
	t_list	tests;

	lst_init(&tests, free);
	load_test(&tests, "Timeout", timeout_simple_test);
	load_test(&tests, "No timeout", timeout_no_timeout_test);
	return (launch_tests(&tests, "TIMEOUT"));
}
