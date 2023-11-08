# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfafouri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 18:11:29 by hfafouri          #+#    #+#              #
#    Updated: 2023/11/08 13:41:17 by abouyata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRCS	= ft_isalpha.c ft_isdigit.c	ft_isalnum.c ft_isascii.c \
		  ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		  ft_memcpy.c ft_memmove.c ft_strchr.c ft_strdup.c \
		  ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c \
		  ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c \
		  ft_toupper.c ft_memchr.c ft_atoi.c ft_calloc.c \
		  ft_strtrim.c ft_memcmp.c \

OBJCS	= ${SRCS:.c=.o}
NAME	= libft.a
LIBC	= ar rcs
CFLAGS	= -Wall -Wextra -Werror
CC	= gcc
RM	= rm -f

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJCS}
	${LIBC} ${NAME} ${OBJCS}

all : ${NAME}

clean:
	${RM} ${OBJCS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
