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

char	*ft_strninsert(char *dst, const char *src, size_t start, size_t max)
{
	size_t	i;
	size_t	dst_len;

	if (!dst)
		return (NULL);
	dst_len = ft_strlen(dst);
	if (!src || start >= dst_len)
		return (dst + dst_len);
	i = 0;
	while (src[i] && dst[i + start] && i != max)
	{
		dst[i + start] = src[i];
		i++;
	}
	return (dst + dst_len);
}

char	*ft_strinsert(char *dst, const char *src, size_t start)
{
	return (ft_strninsert(dst, src, start, -1));
}
