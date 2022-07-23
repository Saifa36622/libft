/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 02:20:28 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/24 02:26:18 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *str)
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
