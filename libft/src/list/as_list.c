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

t_list	*as_list(void **array, t_consumer del)
{
	t_list	*list;
	t_entry	**prev;
	t_entry	*entry;

	if (!array)
		return (NULL);
	list = lst_new(del);
	if (!list)
		return (NULL);
	prev = &list->first;
	while (*array)
	{
		entry = lst_new_entry(*array);
		if (!entry)
		{
			lst_free(list);
			return (NULL);
		}
		*prev = entry;
		prev = &entry->next;
		list->size++;
		array++;
	}
	return (list);
}

t_list	*as_listf(void **array, t_consumer del)
{
	t_list	*list;

	if (!array)
		return (NULL);
	list = as_list(array, del);
	if (!list)
		while (*array)
			del(*(array++));
	free(array);
	return (list);
}
