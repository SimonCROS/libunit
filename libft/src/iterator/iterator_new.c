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

t_iterator	iterator_new(const t_list *list)
{
	t_iterator	iterator;

	iterator.list = list;
	iterator.current = NULL;
	iterator.index = -1;
	return (iterator);
}

t_citerator	citerator_new(const t_clist *list)
{
	t_citerator	iterator;

	iterator.list = list;
	iterator.current = NULL;
	iterator.index = -1;
	return (iterator);
}
