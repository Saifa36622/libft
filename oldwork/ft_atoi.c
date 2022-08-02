/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>           +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:07:21 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/03 02:21:37 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	y;
	int	z;

	y = 0;
	x = 1;
	z = 0;
	while (str[z] && (str[z] == '\f' || str[z] == '\t' || str[z] == ' ' || \
			str[z] == '\n' || str[z] == '\r' || str[z] == '\v'))
		i++;
	if (str[z] == '-' || str[z] == '+')
	{
		if (str[z] == '-')
			x = -1;
		z++;
	}
	while (str[z] && str[z] >= '0' && str[z] <= '9')
	{
		y *= 10;
		y += str[z] - '0';
		z++;
	}
	y *= x;
	return (y);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
