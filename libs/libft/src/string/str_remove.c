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

char	**str_rmlast(char **container)
{
	char	*res;
	int		len;
	int		i;

	if (!container)
		return (NULL);
	len = ft_strlen(*container);
	if (len > 0)
	{
		res = malloc(len);
		if (!res)
			return (NULL);
		i = -1;
		while (++i < len - 1)
			res[i] = (*container)[i];
		res[i] = 0;
		free(*container);
		*container = res;
	}
	return (container);
}
