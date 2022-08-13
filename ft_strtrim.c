/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:25:07 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/13 16:56:28 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check(const char *x, char y)
{
	while (*x)
		if (*x++ == y)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		x;
	size_t	begin;
	size_t	stop;
	int		y;
	char	*newstr;

	x = 0;
	begin = 0;
	if (!s1 || !set)
		return (0);
	stop = ft_strlen(s1);
	while (check(set, s1[begin]) == 1)
		begin++;
	while (stop > begin && check(set, s1[stop - 1]) == 1)
		stop--;
	y = stop - begin;
	newstr = malloc((y + 1) * sizeof(char));
	if (!newstr)
		return (0);
	while (x < y)
		newstr[x++] = s1[begin++];
	newstr[x] = '\0';
	return (newstr);
}
/*
int main()
{
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	return 0;
}
*/
/*
allocate (with malloc) -> return a copy of s1 with the charecter in 
	set being removed
NULL if the allocation fails.
example 
-> abqbc trim by abc -> q
*/
/*
	line 33 -> check empty in s1 and set 
	stop == end of s1 (strlen of s1)
	line 42 -> check null in new str after malloc
*/
/*
   value 
s1 the str to be trim 
set the char that need to be trim 
*/