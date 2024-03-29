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

void	**as_array(t_list *list)
{
	t_iterator	iterator;
	void		**array;
	int			i;

	if (!list)
		return (NULL);
	i = 0;
	array = malloc(sizeof(*array) * (list->size + 1));
	iterator = iterator_new(list);
	while (iterator_has_next(&iterator))
		array[i++] = iterator_next(&iterator);
	array[i] = NULL;
	return (array);
}

void	**as_arrayf(t_list *list)
{
	void	**array;

	array = as_array(list);
	if (list)
		lst_free(list);
	return (array);
}
