/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 02:20:28 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/05 21:49:47 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*unsigned int	len(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int dstsize)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	z;
	unsigned int	z2;

	x = 0;
	y = 0;
	while (dst[y] != '\0')
	{
		y++;
	}
	z = y;
	z2 = len(src);
	if (dstsize == 0 || dstsize <= z)
		return (z2 + dstsize);
	while (src [x] != '\0' && x < dstsize - z - 1)
	{
		dst[y] = src[x];
		x++;
		y++;
	}
	dst[y] = '\0';
	return (z + z2);
}
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;

	x = ft_strlen(dst);
	if (ft_strlen(dst) >= dstsize)
		return (dstsize + ft_strlen(src));
	while (x < dstsize - 1 && *src)
		dst[x++] = *src++;
	dst[x] = '\0';
	return (ft_strlen(src) + x);
}
