/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 13:51:49 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/05 14:22:57 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	x;

	x = 0;
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s2)
		return (NULL);
	while (*(s + x))
	{
		*(s2 + x) = *(s + x);
		x++;
	}
	*(s2 + x) = '\0';
	return (s2);
}
/*
    strdup == string duplicate
    return the pointer to a new string which is a duplicate of str s 
    the mem for the new str is obtained via malloc 
    return value -> return the pointer to a new string
    it will return null if insuffuficient mem was available
*/
