# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smeethon <smeethon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 18:12:40 by smeethon          #+#    #+#              #
#    Updated: 2022/08/26 17:43:00 by smeethon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#SRCS := $(shell find . -name '*.c')
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_atoi.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memset.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strrchr.c ft_strnstr.c ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_substr.c ft_strmapi.c ft_striteri.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c

OBJS := $(SRCS:.c=.o)

BONUS	= ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
	       	ft_lstiter.c \
	       	ft_lstlast.c \
		ft_lstmap.c \
	       	ft_lstnew.c \
	       	ft_lstsize.c

BONUS_OBJS = $(BONUS:%.c=%.o)

all: $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)  $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY: clean fclean all re bonus