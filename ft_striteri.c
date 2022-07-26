/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:44:21 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/07 00:44:23 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	x;

	x = 0;
	if (!s || !f)
		return ;
	while (s[x])
	{
		f(x, s + x);
		x++;
	}
}

/*
Applies the function f on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to 'f' to be modified if necessary.
*/
/*
        My interpret
        applied func f to each char of the str 
        by pass by f that will modified it (if neces) 
        and then x++
        (work little similar to ft_swap)
*/
/*
    line 8 -> check null 
    line 9 -> return void  (return nothing just end th program)
*/
