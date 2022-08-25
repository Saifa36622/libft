/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:48:53 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/25 15:58:38 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*x;
	int		y;

	y = 0;
	if (!s1 || !s2)
		return (NULL);
	x = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!x)
		return (NULL);
	while (*s1)
	{
		x[y++] = *(char *)s1;
		s1++;
	}
	while (*s2)
	{
		x[y++] = *(char *)s2;
		s2++;
	}
	x[y] = '\0';
	return (x);
}
/*
#include <stdio.h>
int main (){
    printf ("%s", ft_strjoin("hi","hello"));
}*/
/*
 strjoin is func that make tw str join (like the name)
 - first -> check the null in s1 and s2 (empty s1 or s2 therefor return NULL)
 - then create (malloc) new str (-> to store all he str in) by the 
 len of s1 and s2 combine 
- the check the new str that been malloc  -> it empty -> return null
- the store the s1 and s2 to the new str you just malloc 
- last thing -> the last str in new ster is null
*/
// return value -> return the new str that s1 and s2 join alredy
