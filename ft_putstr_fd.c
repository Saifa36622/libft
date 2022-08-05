/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 22:10:43 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/05 22:12:06 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *x, int fd)
{
	if (!x)
		return ;
	while (*x != '\0')
	{
		write(fd, x, 1);
		x++;
	}
}
/*
    return in line 18 -> return nothing -> for void
*/