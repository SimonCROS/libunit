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

void	*lst_first(t_list *list)
{
	if (lst_is_empty(list))
		return (NULL);
	return (list->first->value);
}

void	*lst_find_first(t_list *list, t_predicate predicate)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return (NULL);
	entry = list->first;
	while (entry && !predicate(entry->value))
	{
		entry = entry->next;
	}
	if (!entry)
		return (NULL);
	return (entry->value);
}

void	*lst_find_firstp(t_list *list, t_bipredicate comparator, void *arg)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return (NULL);
	entry = list->first;
	while (entry && !comparator(entry->value, arg))
	{
		entry = entry->next;
	}
	if (!entry)
		return (NULL);
	return (entry->value);
}

void	*clst_first(t_clist *list)
{
	if (clst_is_empty(list))
		return (NULL);
	return (list->first);
}

void	*clst_find_first(t_clist *list, t_bipredicate comparator, void *arg)
{
	t_centry	*entry;

	if (clst_is_empty(list))
		return (NULL);
	entry = list->first;
	while (entry && !comparator(entry, arg))
	{
		entry = entry->next;
	}
	if (!entry)
		return (NULL);
	return (entry);
}
