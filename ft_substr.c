/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:31:18 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/06 21:52:34 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	str = malloc(sizeof(*s) * (len + 1));
	if (!str || !s)
		return (NULL);
	while (s[x])
	{
		if (x >= start && y < len)
		{
			str[y] = s[x];
			y++;
		}
		x++;
	}
	str[y] = '\0';
	return (str);
}
/*
 line 24 -> if !s to protect in unitest
*/
