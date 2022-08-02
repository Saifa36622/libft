/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>            +#+  +:+      +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:27:17 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/03 00:27:17 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{

}

/*fuc that copy the n byte from the mem area of *src to *dst and the copying 
    takes place as though the bytes in src are first copied into a
    temporary array that does not overlap src or dest and the bytes
    are then copied from the temporary array to dest and then return the *dst 
    */