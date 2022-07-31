/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:44:48 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/31 23:07:52 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x])
	{
		if ((str[x] >= 'A' && str[x] <= 'Z') || \
				(str[x] >= 'a' && str[x] <= 'z'))
			x++;
		return (0);
	}
	return (1);
}
/*
int main ()
{
	ft_str_is_alpha("hello");
}
*/
