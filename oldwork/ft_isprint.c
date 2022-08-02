/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:44:41 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/31 23:12:57 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/*int	ft_isprint(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if (str[x] >= 32 && str[x] <= 126)
			x++;
		else
		{
			return (0);
		}
	}
	return (1);
}*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 127 && c >= 32)
		return (1);
	return (0);
}
/* 
int	main()
{
	printf("%d\n", ft_str_is_printable("d5r67tyuihgfebhvg"));
	printf("%d", ft_str_is_printable("\n\t\v\f"));
} */
