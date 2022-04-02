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

char	*ft_strchr(const char *str, int c)
{
	char	*cp;

	if (!str)
		return (NULL);
	cp = (char *)str;
	while (1)
	{
		if (*cp == c)
			return (cp);
		if (!*cp)
			break ;
		++cp;
	}
	return (NULL);
}

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*cp;

	if (!str)
		return (NULL);
	cp = (char *)str;
	i = ft_strlen(str);
	while (i)
	{
		if (cp[i] == c)
			return (cp + i);
		--i;
	}
	if (cp[i] == c)
		return (cp + i);
	return (NULL);
}
