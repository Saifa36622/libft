/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 01:16:41 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/24 01:19:46 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *x)
{
	size_t	y;

	y = 0;
	while (x[y])
		y++;
	return (y);
}
