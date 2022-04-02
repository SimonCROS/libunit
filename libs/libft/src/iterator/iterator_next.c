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

void	*iterator_next(t_iterator *iterator)
{
	if (!iterator->list || !iterator_has_next(iterator)
		|| (!iterator->current && iterator->index != -1))
		return (NULL);
	if (iterator->index == -1)
		iterator->current = iterator->list->first;
	else
		iterator->current = iterator->current->next;
	iterator->index++;
	return (iterator->current->value);
}

void	*citerator_next(t_citerator *iterator)
{
	if (!iterator->list || !citerator_has_next(iterator)
		|| (!iterator->current && iterator->index != -1))
		return (NULL);
	if (iterator->index == -1)
		iterator->current = iterator->list->first;
	else
		iterator->current = iterator->current->next;
	iterator->index++;
	return (iterator->current);
}
