/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 10:27:09 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/06 10:41:33 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write2(char x, int fd)
{
	write(fd, &x, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	x;
	int		y;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n == 0)
		write2 ('0', fd);
	else
	{
		if (n < 0)
		{
			write2 ('-', fd);
			n *= -1;
		}
		y = 1;
		while (n / y >= 10)
			y *= 10;
		while (y)
		{
			x = n / y + '0';
			write2 (x, fd);
			n %= y;
			y /= 10;
		}
	}
}
