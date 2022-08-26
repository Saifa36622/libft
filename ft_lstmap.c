/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:52:52 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/26 15:44:58 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*x;
	t_list	*y;

	x = NULL;
	while (lst != NULL)
	{
		y = ft_lstnew(f(lst->content));
		if (!y)
		{
			ft_lstclear(&x, del);
			return (NULL);
		}
		ft_lstadd_back(&x, y);
		lst = lst->next;
	}
	return (x);
}
