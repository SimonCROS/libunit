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
# include <time.h>
# include <stdio.h>
# include <fcntl.h>
# include <signal.h>

/*** Defines ******************************************************************/

# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RED "\033[31m"
# define GREY "\033[35m"
# define RESET "\033[0m"

/*** Types ********************************************************************/

typedef struct s_unit_test	t_unit_test;
typedef struct s_test		t_test;

/*** Basic testing functions **************************************************/

struct s_unit_test
{
	char	*name;
	int		(*function)(void);
	int		status;
};

struct s_test
{
	char		*category;
	FILE		*fp;
	t_list		*tests;
};

int		launch_tests(t_list *tests, char *category);
void	load_test(t_list *tests, char *test_name, int (*function)(void));
void	out_log_tests(t_test *test, int passed);
void	out_log_test(t_unit_test *current, t_test *test);
int		test_passed(t_unit_test *test);
int		test_terminated(t_unit_test *test);
char	*get_res_string(int status);

#endif
