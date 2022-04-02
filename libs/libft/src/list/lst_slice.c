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

t_list	*lst_slice(t_list *list, int start, int end)
{
	t_list	*copy;

	copy = lst_new(list->del);
	if (!copy)
		return (NULL);
	if (start < 0)
		start += list->size;
	if (end < 0)
		end += list->size;
	start = fmaxi(start, 0);
	end = fmini(end, list->size);
	while (start < end)
		lst_push(copy, lst_get(list, start++));
	return (copy);
}
