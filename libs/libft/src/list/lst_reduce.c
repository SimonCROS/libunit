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

void	*lst_reduce(t_list *list, void *id, t_bifunction acc, t_consumer acc_f)
{
	t_entry	*entry;
	void	*identity_tmp;

	if (lst_is_empty(list))
		return (id);
	entry = list->first;
	while (entry)
	{
		identity_tmp = id;
		id = acc(id, entry->value);
		if (acc_f)
			acc_f(identity_tmp);
		entry = entry->next;
	}
	return (id);
}

void	*lst_reducef(t_list *list, void *id, t_bifunction acc, t_consumer acc_f)
{
	void	*result;

	result = lst_reduce(list, id, acc, acc_f);
	lst_destroy(list);
	return (result);
}
