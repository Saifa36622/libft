/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:46:18 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/06 23:49:45 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	char			*str;

	x = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[x] != '\0')
	{
		str[x] = f(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
/*
Applies the function f to each character of the
string s (line 28), and passing its index as first argument
to create a new string with malloc (create malloc -> line 23) resulting
from successive applications of f
*/
/* *My interpret*
    -first check s -> 
    -malloc str to by strlen s and check str again
    -while s[x] not a null -> pass the data to str that been malloc
    but pass by f and then x++ 
    -last str should be null
    */
/*
 	if !s and str == NULL -> to protect unit test
*/
