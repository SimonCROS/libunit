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
#include "tests.h"

int	main(void)
{
	int	status;

	status = 0;
	status |= crash_launcher();
	ft_putendl("========================================");
	status |= strlen_launcher();
	ft_putendl("========================================");
	status |= toupper_launcher();
	ft_putendl("========================================");
	status |= strjoin_launcher();
	ft_putendl("========================================");
	status |= strcmp_launcher();
	ft_putendl("========================================");
	status |= calloc_launcher();
	return (ft_ternary(status == 0, EXIT_SUCCESS, EXIT_FAILURE));
}
