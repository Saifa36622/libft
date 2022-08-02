/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>            +#+  +:+      +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:27:17 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/03 02:50:42 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*x;
	char	*z;
	size_t	y;

	x = (char *)src;
	z = (char *)dst;
	y = 0;
	if (z > x)
	{
		while (len-- > 0)
			z[len] = x[len];
	}
	else
	{
		while (y < len)
		{
			z[y] = x[y];
			y++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/
// man memmove 
/*fuc that copy the n byte from the mem area of *src to *dst and the copying 
	takes place as though the bytes in src are first copied into a
	temporary array that does not overlap src or dest and the bytes
	are then copied from the temporary array to dest and then return the *dst 
	*/
// line 21,22 -> convert src and dst to char 
// return dest -> void in void 
