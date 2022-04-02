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

void	clst_clear(t_clist *list)
{
	t_centry	*entry;

	if (clst_is_empty(list))
		return ;
	entry = clst_shift(list);
	while (entry)
	{
		list->del(entry);
		entry = clst_shift(list);
	}
}

void	lst_free(t_list *list)
{
	t_entry	*entry;

	if (lst_is_empty(list))
	{
		entry = lst_shift_entry(list);
		while (entry)
		{
			free(entry);
			entry = lst_shift_entry(list);
		}
	}
	free(list);
}

void	lst_clear(t_list *list)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return ;
	entry = lst_shift_entry(list);
	while (entry)
	{
		if (list->del && entry->value)
			list->del(entry->value);
		free(entry);
		entry = lst_shift_entry(list);
	}
}
