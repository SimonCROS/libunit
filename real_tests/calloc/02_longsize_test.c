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

int	calloc_long_size(void)
{
	int	*array;

	array = ft_calloc(150, 4);
	if (!array)
		return (-1);
	array[1] = 29094;
	array[150] = 109234;
	if (array[1] != 29094 || array[150] != 109234)
	{
		free(array);
		return (-1);
	}
	free(array);
	return (0);
}
