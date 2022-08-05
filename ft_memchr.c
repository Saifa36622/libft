/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 01:36:37 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/31 23:02:44 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			x;

	str = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (str[x] == (unsigned char)c)
			return ((void *)&str[x]);
		x++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
/*
    memchr use to searh scan  n byte point by s and scan for c 
    *** return pointer of matching byte or 
    ( NULL -> does not have C in mem )***  
*/
// line 22 -> convert s to unsigned char keep it in str 
// line 26 -> convert c to unsigned char to compare it to str[x]
// return str and convert it to void
