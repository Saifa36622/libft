/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:44:41 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/23 11:48:18 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if (str[x] >= 32 && str[x] <= 126)
			x++;
		else
		{
			return (0);
		}
	}
	return (1);
}
/* 
int	main()
{
	printf("%d\n", ft_str_is_printable("d5r67tyuihgfebhvg"));
	printf("%d", ft_str_is_printable("\n\t\v\f"));
} */
