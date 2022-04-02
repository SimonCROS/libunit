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

int	clst_is_empty(t_clist *list)
{
	if (!list)
		return (TRUE);
	return (!(list->first));
}

int	clst_not_empty(t_clist *list)
{
	if (!list)
		return (TRUE);
	return (!!(list->first));
}

int	lst_is_empty(t_list *list)
{
	if (!list)
		return (TRUE);
	return (!(list->first));
}

int	lst_not_empty(t_list *list)
{
	if (!list)
		return (TRUE);
	return (!!(list->first));
}
