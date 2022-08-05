/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 01:21:56 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/05 14:14:50 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

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
/*
#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}*/
/*
mem set is fuc that fill the len byte of mem start at b by the constant in byte c
*/
/*
	b -> pointer to area of mem to fill
	c -> value to be set ,pass as int but the func will fill the area of mem with 
	unsigned char of conversion of this value
	n -> num of byte to be set to the value
*/
// Return value -> return the pointer to the mem area
// line 15 -> man memset fuc 
// line 21 -> change b to unsigned char to use in return line 
// line 27 -> can compare y to b because y and b is unsigned char 
