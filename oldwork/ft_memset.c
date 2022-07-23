/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 01:21:56 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/24 01:30:11 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			x;
	unsigned char	*y;

	x = 0;
	y = (unsigned char *)b;
	while (x < len)
	{
		y[x] = c;
		x++;
	}
	return (b = y);
}
// line 15 -> man memset fuc 
// line 21 -> change b to unsigned char to use in return line 
// line 27 -> can compare y to b because y and b is unsigned char 