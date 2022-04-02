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

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include "libft.h"

/*** Types ********************************************************************/

typedef struct s_unit_test	t_unit_test;

/*** Basic testing functions **************************************************/

struct s_unit_test
{
	char	*name;
	char	*category;
	int		(*function)(void);
	char	passed;
};

int		launch_tests(t_list *tests);
void	load_test(t_list *tests, char *test_name, int (*function)(void));

#endif
