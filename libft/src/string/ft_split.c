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

static void	*free_all(char **obj, int len)
{
	while (len--)
	{
		free(*obj);
		obj++;
	}
	free(obj);
	return (NULL);
}

static int	ft_init(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			++j;
		while (s[i] && s[i] != c)
			i++;
	}
	return (j);
}

static char	*ft_sstrchr(const char *s, char c)
{
	char	*newstr;

	newstr = ft_strchr(s, c);
	if (!newstr)
		newstr = ft_strchr(s, 0);
	return (newstr);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	char	*newstr;
	char	**output;

	if (!s)
		return (NULL);
	output = ft_calloc(ft_init(s, c) + 1, sizeof(*output));
	if (!output)
		return (NULL);
	i = 0;
	while (*s)
	{
		newstr = ft_sstrchr(s, c);
		if (newstr - s)
		{
			output[i] = ft_substr(s, 0, newstr - s);
			if (!output[i++])
				return (free_all(output, --i));
			s = newstr;
		}
		else
			s++;
	}
	output[i] = NULL;
	return (output);
}

char	**ft_splitf(char *s, char c)
{
	char	**output;

	output = ft_split(s, c);
	free(s);
	return (output);
}
