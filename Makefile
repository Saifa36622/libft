# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smeethon <smeethon@student.42.fr>             +#+  +:+       +#+      #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 18:12:40 by smeethon            #+#    #+#            #
#    Updated: 2022/07/24 18:12:40 by smeethon           ###   ########.fr      #
#                                                                              #
# **************************************************************************** #

DIRSRC		= srcs/

SRC			= main.c ft_putnbr.c ft_atoi.c

SRCS		= ${addprefix ${DIRSRC}, ${SRC}}

OBJS		= ${SRCS:.c=.o}

HEAD		= includes/

NAME		= libft.a

GCC			= gcc
RM			= rm -f

FLAGS		= -Wall -Wextra -Werror

.c.o:
	${GCC} ${FLAGS} -c -I {HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${GCC} -o ${NAME} ${OBJS} ${FLAGS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
