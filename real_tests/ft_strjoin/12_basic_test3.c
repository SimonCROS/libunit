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

int	strjoin_basic3_test(void)
{
	char	*a;
	char	*b;
	char	*c;

	b = ft_strdup("chocolat");
	a = ft_strdup("i hate \n");
	c = ft_strjoin(a, b);
	free(a);
	free(b);
	if (ft_strcmp(c, "i hate \nchocolat") != 0)
	{
		free(c);
		return (-1);
	}
	free(c);
	return (0);
}
