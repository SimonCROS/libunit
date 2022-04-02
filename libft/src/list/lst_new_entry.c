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

t_entry	*lst_new_entry_2(void *value, t_entry *next, t_consumer delete)
{
	t_entry	*entry;

	entry = malloc(sizeof(t_entry));
	if (!entry)
	{
		if (next)
			delete(next->value);
		free(next);
		return (NULL);
	}
	entry->value = value;
	entry->next = next;
	return (entry);
}

t_entry	*lst_new_entry(void *value)
{
	return (lst_new_entry_2(value, NULL, NULL));
}
