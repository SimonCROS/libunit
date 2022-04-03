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

#ifndef TESTS_H
# define TESTS_H

/*** crash ********************************************************************/

int	crash_launcher(void);

int	crash_sigsegv_test(void);
int	crash_ok_test(void);
int	crash_ko_test(void);
int	crash_sigabrt_test(void);

/*** strjoin ******************************************************************/

int	strjoin_launcher(void);

int	strjoin_basic_test(void);
int	strjoin_null_test(void);
int	strjoin_long_test(void);
int	strjoin_strange_test(void);
int	strjoin_short_test(void);
int	strjoin_null2_test(void);
int	strjoin_null3_test(void);
int	strjoin_null4_test(void);
int	strjoin_null5_test(void);
int	strjoin_null6_test(void);
int	strjoin_basic2_test(void);
int	strjoin_basic3_test(void);
int	strjoin_basic4_test(void);
int	strjoin_unicode_test(void);
int	strjoin_unicode2_test(void);

#endif
