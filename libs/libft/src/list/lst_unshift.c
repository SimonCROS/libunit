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

void	*lst_unshift(t_list *list, void *element)
{
	t_entry	*entry;

	entry = lst_new_entry(element);
	if (!entry)
	{
		list->del(element);
		return (NULL);
	}
	entry->next = list->first;
	list->first = entry;
	++(list->size);
	return (element);
}
