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

int	lst_count(t_list *list, t_predicate filter)
{
	int		count;
	t_entry	*entry;

	count = 0;
	if (lst_is_empty(list))
		return (count);
	entry = list->first;
	if (filter(entry->value))
		count++;
	while (entry->next)
	{
		entry = entry->next;
		if (filter(entry->value))
			count++;
	}
	return (count);
}
