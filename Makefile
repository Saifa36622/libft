# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 18:12:40 by smeethon          #+#    #+#              #
#    Updated: 2022/08/21 12:27:59 by smeethon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#SRCS := $(shell find . -name '*.c')
SRCS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint ft_strchr ft_strlen ft_strncmp ft_tolower ft_toupper ft_atoi ft_bzero ft_memcpy ft_memmove ft_memchr ft_memset ft_memcmp ft_strlcat ft_strlcpy ft_strrchr ft_strnstr ft_strdup ft_calloc ft_putchar_fd ft_putendl_fd ft_putstr_fd ft_putnbr_fd ft_substr ft_strmapi ft_striteri ft_strjoin ft_strtrim ft_split ft_itoa

OBJS := $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
