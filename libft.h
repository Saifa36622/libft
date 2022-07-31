/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:30:45 by smeethon          #+#    #+#             */
/*   Updated: 2022/07/31 23:17:22 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int x);
int		ft_isdigit(int x);
int		ft_isprint(int c);
char	*ft_strchr(const char *s, int c);
int		ft_strlen(const char *x);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		check_space(const char *c, int i);
int		get_num(const char *str, int i);

#endif
