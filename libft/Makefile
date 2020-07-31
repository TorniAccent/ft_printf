# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: student <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/24 21:22:47 by student           #+#    #+#              #
#    Updated: 2020/05/25 20:53:18 by student          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_atoi.c		\
			ft_bzero.c		\
			ft_calloc.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_itoa.c		\
			ft_xtoa.c		\
			ft_utoa.c		\
			ft_memccpy.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_putchar_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_putstr_fd.c	\
			ft_split.c		\
			ft_strchr.c		\
			ft_strdup.c		\
			ft_strjoin.c	\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		\
			ft_strmapi.c	\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_strtrim.c	\
			ft_substr.c		\
			ft_tolower.c	\
			ft_toupper.c	\

B_SRCS =	ft_lstadd_back_bonus.c	\
			ft_lstdelone_bonus.c	\
			ft_lstmap_bonus.c		\
			ft_lstadd_front_bonus.c	\
			ft_lstiter_bonus.c		\
			ft_lstnew_bonus.c		\
			ft_lstclear_bonus.c		\
			ft_lstlast_bonus.c		\
			ft_lstsize_bonus.c		\

CC = gcc

RM = rm -rf

NAME = libft.a

OBJS = -Wall -Wextra -Werror -c

$(NAME): $(SRCS)
	$(CC) $(OBJS) $(SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(B_SRCS)
	$(CC) $(OBJS) $(B_SRCS)
	ar rc $(NAME) *.o
	ranlib $(NAME)
