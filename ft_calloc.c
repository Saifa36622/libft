/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:49:38 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/05 13:10:06 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*x;

	x = malloc(num * size);
	if (!x)
		return (NULL);
	ft_bzero(x, num * size);
	return (x);
}
/* 
    calloc == mem allocator
    -> allocate the request mem and return the pointer 
    calloc != malloc
    malloc -> not set mem to zero but calloc will set allocated mem to zero
*/
/*
    num -> num of element to be allocated 
    size ->size of element 
*/
/*
        *Return value*
        if num and size is not zero -> calloc will return a pointer to allocated 
        space 

        else if either num or size == 0 -> -return null pointer 
                                        -> -A pointer to the allocated space
        ***( but the pointer can not use to access the obj) 
*/
