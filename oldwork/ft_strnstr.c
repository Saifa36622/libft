/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 00:16:28 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/01 00:18:16 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

strnstr(const char	*x, const char *y, size_t len)
{

}*/
#include"libft.h"

char *strnstr(const char	*big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;
	size_t	z;
	
	x = 0;
	y = 0;
	if (!little[0])
		return ((char *)big);
	z = ft_strlen(little);
	while (x < len && big[x])
	{
		if (big[x] == little[y])
			y++;
		else
			y = 0;
		if (!little[y])
			return ((char *)big + x - y + 1);
		x++;
	}
	return (NULL);
}

