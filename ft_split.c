/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:24:20 by smeethon          #+#    #+#             */
/*   Updated: 2022/12/24 19:09:11 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count2(const char *s, char c)
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

static	size_t	check2(const char *s, char c, size_t len)
{
	if (!ft_strchr(s, c))
		len = ft_strlen(s);
	else
		len = ft_strchr(s, c) - s;
	return (len);
}

char	**ft_split(const char *s, char c)
{
	char	**x;
	size_t	len;
	int		y;

	y = 0;
	if (!s)
		return (0);
	x = malloc((count2(s, c) + 1) * sizeof(char *));
	if (!x)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			len = check2(s, c, len);
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
/*
another malloc is in substr
*/
// #include <stdio.h>
// int main()
// {
//     char a[] = "jest mzzb ogiem alfa";
//     printf ("%s",*ft_split(a, 'o'));
// }
