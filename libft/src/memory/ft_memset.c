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

void	*ft_memset(void *b, int c, size_t len)
{
	long			lo;
	unsigned char	*str;
	size_t			i;

	str = b;
	lo = c;
	i = 0;
	while (i++ < sizeof(long))
		lo = lo << 8 | (unsigned char)c;
	while (len)
	{
		if (len >= sizeof(long))
		{
			len -= sizeof(long);
			*(long *)str = lo;
			str += sizeof(long);
		}
		else
		{
			*(str++) = c;
			len--;
		}
	}
	return (b);
}
