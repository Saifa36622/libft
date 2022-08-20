/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spilt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:24:20 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/20 23:38:44 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(char const *s, char c)
{
	size_t	x;

    x = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		    x++;
		while (*s != c && *s)
			s++;
	}
	return (x);
}

char	**ft_split(char const *s, char c)
{
	char	**x;
	size_t len;
	int		y;

    y = 0;
    if (!s)
        return (0);
	x = malloc((count(s, c) + 1) * sizeof(char *));
	if (!x)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			x[y++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	x[y] = NULL;
	return (x);
}
/*
you can not use if (! s || !x ) -> return 0
under malloc (to got protect in uniteset)
*/