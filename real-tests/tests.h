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

/*** strlen ****************************************************************2**/

int	strlen_launcher(void);

int	strlen_basic_test(void);
int	strlen_null_test(void);

/*** toupper ***************************************************************3**/

int	toupper_launcher(void);

int	toupper_basic_test(void);
int	toupper_null_test(void);

/*** strjoin ***************************************************************4**/

int	strjoin_launcher(void);

int	strjoin_bigstring_test(void);
int	strjoin_null_test(void);

/*** strcmp ***************************************************************5**/

int	strcmp_launcher(void);

int	strcmp_basic_test(void);
int	strcmp_null_test(void);

/*** celloc ***************************************************************6**/

int	calloc_launcher(void);

int	calloc_short_size(void);
int	calloc_long_size(void);
int	calloc_null_size(void);

#endif
