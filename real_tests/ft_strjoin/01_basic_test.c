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

int	strjoin_bigstring_test(void)
{
	char	*a;
	char	*b;
	char	*c;

	b = ft_strdup("this is shorter");
	a = ft_strdup("this is a pretty short string, ");
	c = ft_strjoin(a, b);
	free(a);
	free(b);
	if (ft_strcmp(c, "this is a pretty short string, this is shorter") != 0)
	{
		free(c);
		return (-1);
	}
	free(c);
	return (0);
}
