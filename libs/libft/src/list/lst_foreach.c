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

void	lst_foreach(t_list *list, t_consumer visitor)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return ;
	entry = list->first;
	visitor(entry->value);
	while (entry->next)
	{
		entry = entry->next;
		visitor(entry->value);
	}
}

void	lst_foreachp(t_list *list, t_biconsumer visitor, void *param)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return ;
	entry = list->first;
	visitor(entry->value, param);
	while (entry->next)
	{
		entry = entry->next;
		visitor(entry->value, param);
	}
}
