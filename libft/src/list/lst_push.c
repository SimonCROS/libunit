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

void	*clst_push(t_clist *list, void *entry)
{
	if (!list || !entry)
		return (NULL);
	if (clst_is_empty(list))
		list->first = entry;
	else
		clst_last_entry(list)->next = entry;
	list->size++;
	return (entry);
}

void	*lst_push(t_list *list, void *element)
{
	t_entry	*entry;

	if (!list)
		return (NULL);
	entry = lst_new_entry(element);
	if (!entry)
	{
		list->del(element);
		return (NULL);
	}
	if (lst_is_empty(list))
		list->first = entry;
	else
		lst_last_entry(list)->next = entry;
	list->size++;
	return (element);
}
