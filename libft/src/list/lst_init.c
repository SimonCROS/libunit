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

t_clist	*clst_init(t_clist *list, t_consumer del)
{
	list->del = del;
	list->size = 0;
	list->first = NULL;
	return (list);
}

t_list	*lst_init(t_list *list, t_consumer del)
{
	list->del = del;
	list->size = 0;
	list->first = NULL;
	return (list);
}
