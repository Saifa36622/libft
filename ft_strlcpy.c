/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 02:05:39 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/31 23:02:04 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

int	lenght(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	y;
	unsigned int	z;

	y = 0;
	z = lenght(src);
	if (size < 1)
		return (z);
	while (src[y] != '\0' && y < size - 1)
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (z);
}
/*
int				main(void)
{
	char	*string1;
	char	string2[2];

	string1 = "lol";
	printf("base   : %s\n", string1);
	strlcpy(string2, string1, 1);
	printf("cpy c  : %s\n", string2);
	ft_strlcpy(string2, string1, 1);
	printf("cpy ft : %s\n", string2);
}*/
