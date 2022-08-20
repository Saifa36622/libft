/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 23:24:34 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/21 00:37:14 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_size(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;
	long	num;

	len = check_size(n);
	num = n;
	s = malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	if (num == 0)
		s[0] = '0';
	s[len--] = '\0';
	while (num)
	{
		s[len] = num % 10 + '0';
		len--;
		num = num / 10;
	}
	return (s);
}
