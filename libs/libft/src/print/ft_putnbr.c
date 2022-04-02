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

ssize_t	ft_putnbr_fd(long n, int fd)
{
	if (n < 0)
		return (ft_putchar_fd('-', fd) + ft_putchar_fd(-n, fd));
	if (n < 10)
		return (ft_putchar_fd(n + '0', fd));
	return (ft_putnbr_fd(n / 10, fd) + ft_putnbr_fd(n % 10, fd));
}

ssize_t	ft_putnbr(long n)
{
	return (ft_putnbr_fd(n, 1));
}
