/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 21:31:18 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/25 12:26:30 by smeethon         ###   ########.fr       */
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
#include <stdio.h>
int main()
{
	char* str;

	str = ft_substr("Hello Poon nooo", 6, 4);
	printf("%s\n", str);

	return 0;
}
*/
// out put should -> "Poon" (start at the 6 index and 
// select only 4 charecter)
/*
s -> the src string 
start -> wheere to start in s
len -> how many you wants
*/
/*
 line 24 -> if !s to protect in unitest
*/
