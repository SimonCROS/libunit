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

int	iterator_has_next(const t_iterator *iterator)
{
	if (!iterator || !iterator->list)
		return (FALSE);
	if (iterator->index == -1)
		return (!!iterator->list->first);
	return (!!iterator->current->next);
}

int	citerator_has_next(const t_citerator *iterator)
{
	if (!iterator || !iterator->list)
		return (FALSE);
	if (iterator->index == -1)
		return (!!iterator->list->first);
	return (!!iterator->current->next);
}
