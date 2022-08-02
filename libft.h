/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:30:45 by smeethon          #+#    #+#             */
/*   Updated: 2022/08/01 00:16:32 by smeethon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int x);
int				ft_isdigit(int x);
int				ft_isprint(int c);
char			*ft_strchr(char *s, int c);
size_t			ft_strlen(const char *x);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
//char	*ft_strnstr(const char *big, const char *little, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(void *s, int c, size_t n);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char			*ft_strrchr(char *s, int c);
char			*ft_strnstr(char *big, char *little, size_t len);


#endif
