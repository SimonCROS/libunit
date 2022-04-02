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

t_list	*lst_splice(t_list *list, int start, int delete_count, void *value)
{
	t_entry	*first;
	t_list	*copy;

	copy = lst_new(list->del);
	if (!list || !copy)
		return (NULL);
	if (start < 0)
		start += list->size;
	start = fmaxi(fmini(list->size, start), 0);
	delete_count = fmaxi(fmini(list->size - start, delete_count), 0);
	while (delete_count--)
		lst_push(copy, lst_remove(list, start + delete_count - 1));
	if (value)
	{
		if (lst_is_empty(list))
			list->first = lst_new_entry(value);
		else
		{
			first = lst_get_entry(list, start - 1);
			first->next = lst_new_entry_2(value, first->next, list->del);
		}
		list->size++;
	}
	return (copy);
}
