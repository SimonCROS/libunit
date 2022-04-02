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

#include "libft.h"

int	ft_intlen(int n)
{
	if (n < 0 && n - 1 > 0)
		return (11);
	if (n < 0)
		return (1 + ft_intlen(-n));
	if (n < 10)
		return (1);
	return (1 + ft_intlen(n / 10));
}

int	ft_uintlen(unsigned int n)
{
	if (n < 10)
		return (1);
	return (1 + ft_uintlen(n / 10));
}

int	ft_intlen_hex(unsigned int n, int prefix, int width)
{
	if (width)
		return (fmaxi(width + (!!prefix * 2), ft_intlen_hex(n / 16, 0, 0)));
	if (prefix)
		return (3 + ft_intlen_hex(n / 16, 0, 0));
	if (n < 16)
		return (1);
	return (1 + ft_intlen_hex(n / 16, 0, 0));
}

int	ft_intlen_octal(unsigned int n)
{
	if (n < 8)
		return (1);
	return (1 + ft_intlen_octal(n / 8));
}
