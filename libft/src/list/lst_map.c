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

t_list	*lst_map(t_list *list, t_mapper_options options, t_consumer del)
{
	t_entry	*entry;
	t_list	*copy;

	copy = lst_new(del);
	if (!copy)
		return (NULL);
	if (lst_is_empty(list))
		return (copy);
	entry = list->first;
	lst_push(copy, ((t_fun)options.mapper)(entry->value));
	while (entry->next)
	{
		entry = entry->next;
		lst_push(copy, ((t_fun)options.mapper)(entry->value));
	}
	return (copy);
}

t_list	*lst_map_in(t_list *list, t_mapper_options options, t_consumer del)
{
	t_entry	*entry;
	void	*tmp;

	if (!list)
		return (NULL);
	entry = list->first;
	while (entry)
	{
		tmp = entry->value;
		if (options.parameter)
			entry->value = ((t_bifun)options.mapper)(tmp, options.parameter);
		else
			entry->value = ((t_fun)options.mapper)(tmp);
		if (options.free_old)
			list->del(tmp);
		entry = entry->next;
	}
	list->del = del;
	return (list);
}
