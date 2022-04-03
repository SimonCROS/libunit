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

int	strjoin_basic4_test(void)
{
	char	*a;
	char	*b;
	char	*c;

	b = ft_strdup("< Doing a mild amount of tomfoolery");
	a = ft_strdup("Doing a little trolling <");
	c = ft_strjoin(a, b);
	free(a);
	free(b);
	if (ft_strcmp(c, "Doing a little trolling << Doing a mild amount of tomfoolery") != 0)
	{
		free(c);
		return (-1);
	}
	free(c);
	return (0);
}
