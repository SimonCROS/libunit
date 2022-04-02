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

/*** Defines ******************************************************************/

# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RED "\033[31m"
# define RESET "\033[0m"

/*** Types ********************************************************************/

typedef struct s_unit_test	t_unit_test;

/*** Basic testing functions **************************************************/

struct s_unit_test
{
	char	*name;
	int		(*function)(void);
	int		status;
};

int		launch_tests(t_list *tests, char *category);
void	load_test(t_list *tests, char *test_name, int (*function)(void));

#endif
