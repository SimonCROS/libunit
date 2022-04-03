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

int	strjoin_null_test(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = "";
	b = "";
	c = ft_strjoin(a, b);
	if (ft_strcmp(c, "") != 0)
	{
		free(c);
		return (-1);
	}
	free(c);
	return (0);
}
