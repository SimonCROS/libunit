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

#ifndef SIGNAL_TESTS_H
# define SIGNAL_TESTS_H

/*** signal *******************************************************************/

int	raise_launcher(void);

int	raise_sigsegv_test(void);
int	raise_sigbus_test(void);
int	raise_sigabrt_test(void);
int	raise_sigfpe_test(void);
int	raise_sigpipe_test(void);
int	raise_sigill_test(void);

#endif
