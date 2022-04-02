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

t_list	*lst_concat(t_list *t1, t_list *t2)
{
	t_list	*copy;

	if (t1->del != t2->del)
		return (NULL);
	copy = lst_new(t1->del);
	if (!copy)
		return (NULL);
	lst_add_all(copy, t1);
	lst_add_all(copy, t2);
	return (copy);
}
