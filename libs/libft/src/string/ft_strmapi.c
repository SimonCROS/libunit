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

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*pointer;
	size_t	size;
	int		i;

	if (!s)
		return (NULL);
	size = ft_strlen(s) + 1;
	pointer = malloc(size);
	if (!pointer)
		return (NULL);
	i = 0;
	while (s[i])
	{
		pointer[i] = f(i, s[i]);
		i++;
	}
	pointer[i] = 0;
	return (pointer);
}
