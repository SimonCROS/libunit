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

#include "libunit.h"
#include <sys/stat.h>
#include <errno.h>

static void	mutefile(char *folder, char *name, FILE *std)
{
	char	*filename;
	FILE	*file;

	if (mkdir(folder, S_IRWXU) == -1 && errno != EEXIST)
		exit(-1);
	filename = ft_strjoin(folder, name);
	if (!filename)
		exit(-1);
	file = freopen(filename, "w+", std);
	free(filename);
	if (!file)
		exit(-1);
}

void	mute(t_unit_test *test)
{
	mutefile("stdout/", test->name, stdout);
	mutefile("stderr/", test->name, stderr);
}
