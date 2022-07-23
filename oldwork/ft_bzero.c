/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 01:37:28 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/24 01:46:33 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*y;
	size_t			x;

	x = 0;
	y = (unsigned char *)s;
	while (x < n)
	{
		y[x] = 0;
		x++;
	}
	s = y;
}
// line 16 -> man memset fuc 
// line 22 -> change s to unsigned char to use in compare line (bzero -
// require no return)
// line 28 -> can compare s to y because y and s is unsigned char 