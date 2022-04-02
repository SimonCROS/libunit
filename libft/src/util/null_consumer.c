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

static void	null_consumer_funct(void *a)
{
	(void)a;
}

static void	null_biconsumer_funct(void *a, void *b)
{
	(void)a;
	(void)b;
}

t_consumer	null_consumer(void)
{
	return (&null_consumer_funct);
}

t_biconsumer	null_biconsumer(void)
{
	return (&null_biconsumer_funct);
}
