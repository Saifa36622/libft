/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 00:16:28 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/21 01:26:34 by smeethon         ###   ########.fr       */
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
	size_t	z;

	x = 0;
	y = 0;
	if (!little[0])
		return ((char *)big);
	z = strlen(little);
	while (x < len && big[x])
	{
		if (big[x] == little[y])
			y++;
		else
			y = 0;
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
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	char *ptr2;
	printf ("%s",ptr = strnstr(largestring, smallstring, 4));
	printf ("%s",ptr2 = ft_strnstr(largestring, smallstring, 4));

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