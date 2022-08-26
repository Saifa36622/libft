/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 14:10:45 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/26 14:15:03 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *newlst;

    newlst = malloc(sizeof(size_t));
    if (!newlst)
            return(NULL)
    newlst->content = content;
    newlst->next = NULL;
    return (newlst);
}
