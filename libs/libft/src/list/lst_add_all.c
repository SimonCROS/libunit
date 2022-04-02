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

int	lst_add_all(t_list *container, t_list *list)
{
	t_entry	*current;
	t_entry	*last;
	int		i;

	if (container->del != list->del || lst_is_empty(list))
		return (container->size);
	i = 0;
	last = lst_last_entry(container);
	current = list->first;
	while (i++ < list->size)
	{
		if (!last)
		{
			last = lst_new_entry(current->value);
			container->first = last;
		}
		else
		{
			last->next = lst_new_entry(current->value);
			last = last->next;
		}
		current = current->next;
		++(container->size);
	}
	return (container->size);
}
