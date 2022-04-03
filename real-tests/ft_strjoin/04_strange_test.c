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

int	strjoin_strange_test(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = ft_strdup("\n\u2651\t\\p\e\a\n");
	b = ft_strdup("\u2651\t\e\\0\e");
	c = ft_strjoin(a, b);
	free(a);
	free(b);
	if (ft_strcmp(c, "\n\u2651\t\\p\e\a\n\u2651\t\e\\0\e") != 0)
	{
		free(c);
		return (-1);
	}
	free(c);
	return (0);
}
