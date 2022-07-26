/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 01:36:37 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/05 17:36:57 by smeethon         ###   ########.fr       */
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

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
/*
#include <stdio.h>
#include <string.h>
 
int main(void)
{
    const char str[] = "ABCDEFG";
    const int chars[] = {'D', 'd'};
    for (size_t i = 0; i < sizeof chars / (sizeof chars[0]); ++i)
    {
        const int c = chars[i];   
        const char *ps = ft_memchr(str, c, strlen(str));
        ps ? printf ("character '%c'(%i) found: %s\n", c, c, ps)
           : printf ("character '%c'(%i) not found\n", c, c);
    }
    return 0;
}*/
/*
	s -> pointer to the mem area you want to searh
	c -> value to be pass as int but the func will do as byte per byte 
	searh using unsigned char conversion of c ( -> line 26 convert c to 
	unsighned char)
	n -> num of byte to be analyzed
*/
/*
    memchr use to searh scan  n byte in str s and scan for c 
    (converted c to an unsigned char) 
    *** return pointer of matching byte (byte that contain c) or 
    ( NULL -> does not have c in mem )***  

*/
// line 22 -> convert s to unsigned char keep it in str 
// line 26 -> convert c to unsigned char to compare it to str[x]
// return str and convert it to void
