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

int	strjoin_long_test(void)
{
	char	*a;
	char	*b;
	char	*c;

	b = ft_strdup("very, very, very, very, very, very, very, very, very, very,"
			" very, very, very, very, very, very, very, very, very, very "
			"long string \nthis is shorter");
	a = ft_strdup("Very, very, very, very, very, very, very, very, very,"
			" very, very, very, very, very, very, very, very, very, very,"
			" very, very, very, very, very, very, very, very, very, very,");
	c = ft_strjoin(a, b);
	free(a);
	free(b);
	if (ft_strcmp(c, "Very, very, very, very, very, very, very, very, very,"
			" very, very, very, very, very, very, very, very, very, very,"
			" very, very, very, very, very, very, very, very, very, very,"
			"very, very, very, very, very, very, very, very, very, very,"
			" very, very, very, very, very, very, very, very, very, very "
			"long string \nthis is shorter") != 0)
	{
		free(c);
		return (-1);
	}
	free(c);
	return (0);
}
