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

void	*lst_pop(t_list *list)
{
	t_entry	**last_pointer;
	t_entry	*last;
	void	*value;

	if (lst_is_empty(list))
		return (NULL);
	last = list->first;
	last_pointer = &(list->first);
	while (last->next)
	{
		last_pointer = &(last->next);
		last = last->next;
	}
	value = last->value;
	free(last);
	*last_pointer = NULL;
	--(list->size);
	return (value);
}
