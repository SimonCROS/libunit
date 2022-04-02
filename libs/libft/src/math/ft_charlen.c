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

int	ft_charlen(char n)
{
	if (n == -128)
		return (4);
	if (n < 0)
		return (1 + ft_charlen(-n));
	if (n < 10)
		return (1);
	return (1 + ft_charlen(n / 10));
}

int	ft_ucharlen(unsigned char n)
{
	if (n < 10)
		return (1);
	return (1 + ft_ucharlen(n / 10));
}

int	ft_charlen_hex(unsigned char n, int prefix, int width)
{
	if (width)
		return (fmaxi(width + (!!prefix * 2), ft_charlen_hex(n / 16, 0, 0)));
	if (prefix)
		return (3 + ft_charlen_hex(n / 16, 0, 0));
	if (n < 16)
		return (1);
	return (1 + ft_charlen_hex(n / 16, 0, 0));
}

int	ft_charlen_octal(unsigned char n)
{
	if (n < 8)
		return (1);
	return (1 + ft_charlen_octal(n / 8));
}
