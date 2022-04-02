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

t_centry	*clst_last_entry(t_clist *list)
{
	t_centry	*entry;

	if (clst_is_empty(list))
		return (NULL);
	entry = list->first;
	while (entry->next)
		entry = entry->next;
	return (entry);
}

t_entry	*lst_last_entry(t_list *list)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return (NULL);
	entry = list->first;
	while (entry->next)
		entry = entry->next;
	return (entry);
}
