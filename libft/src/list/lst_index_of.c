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

int	lst_index_of(t_list *list, t_bipredicate comparator, void *arg)
{
	t_entry	*entry;
	int		index;

	if (lst_is_empty(list))
		return (-1);
	index = 0;
	entry = list->first;
	while (entry)
	{
		if (!comparator && entry->value == arg)
			return (index);
		if (comparator && comparator(entry->value, arg))
			return (index);
		entry = entry->next;
		index++;
	}
	return (-1);
}
