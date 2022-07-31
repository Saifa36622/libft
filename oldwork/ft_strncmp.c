/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:33:59 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/31 23:02:08 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
	{
		return (0);
	}
	while ((unsigned char)*s1 == (unsigned char)*s2 && *s1 != '\0' && n - 1 > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abct");
   strcpy(str2, "ababnkwfkwfesc");

   ret = strncmp(str1, str2, 4);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}
/*
/*
    strncmp use to compare str (charecter after '\0' will not be compare 
    *** '\200' is greater than '\0' ***
    return 0 if it equal 
    return < 0 = str1 is less than str2 and 
    return ret > 0 = str2 is less than str1
*/
// line 21 -> convert const char *s1 *s2 to unsigned char 