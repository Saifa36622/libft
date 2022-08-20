/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 00:16:28 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/21 04:02:35 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

strnstr(const char	*x, const char *y, size_t len)
{

}*/
//#include <stdlib.h>
#include"libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	if (!little[0])
		return ((char *)big);
	while (x < len && big[x])
	{
		if (big[x] == little[y])
			y++;
		else
		{
			x -= y;
			y = 0;
		}
		if (!little[y])
			return ((char *)big + x - y + 1);
		x++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	const char largestring[30] = "aaabcabcd";
	const char smallstring[10] = "aabc";
	printf ("%s\n",ft_strnstr(largestring, smallstring, 10));
	printf ("%s",ft_strnstr(largestring, "a", 1));

}
*/
/*
 fuc that locates the first occurrence of the null-termi-
     nated string "little" in the string "big" 
	 where not more than len characters are searched.
	 Characters that appear after a `\0' character are not
     searched.
*/
/*
					***return value*** ->
  if little is an empty string, big is returned; if little occurs 
  nowhere in big, NULL is returned otherwise a pointer to the 
  first character of the first occurrence of little is returned.
*/
