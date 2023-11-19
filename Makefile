# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouyata <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 20:53:23 by abouyata          #+#    #+#              #
#    Updated: 2023/11/19 12:00:48 by abouyata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		  ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		  ft_memcpy.c ft_memmove.c ft_strchr.c ft_strdup.c \
		  ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c \
		  ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c \
		  ft_toupper.c ft_memchr.c ft_atoi.c ft_calloc.c \
		  ft_strtrim.c ft_memcmp.c ft_putchar_fd.c\
		  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		  ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
		    ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
		    ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJCS	= ${SRCS:.c=.o}
BONUS_OBJCS = $(BONUS_SRC:.c=.o)
NAME	= libft.a
LIBC	= ar rcs
CFLAGS	= -Wall -Wextra -Werror
CC	= gcc
RM	= rm -f

%.o:%.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJCS}
	${LIBC} ${NAME} ${OBJCS}

all : ${NAME}

bonus: $(OBJCS) $(BONUS_OBJCS)
	$(LIBC) $(NAME) $(OBJCS) $(BONUS_OBJCS)

clean:
	${RM} ${OBJCS} $(BONUS_OBJCS)

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re bonus