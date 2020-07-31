# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: student <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/30 21:07:10 by student           #+#    #+#              #
#    Updated: 2020/07/30 21:07:11 by student          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = printf.h
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = ./libft

SRC =	ft_printf.c\
		ft_printf_utils.c\
		convs/ft_print_char.c\
		convs/ft_print_str.c\
		convs/ft_print_ptr.c\
		convs/ft_print_int.c\
		convs/ft_print_u.c\
		convs/ft_print_hex.c

%.o: %.c $(HEADER)
	gcc $(FLAGS) -c $< -o $@

OBJ = $(SRC:%.c=%.o)

$(NAME): $(OBJ)
	@$(MAKE) all -C $(LIBFTDIR)
	@cp ./libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	@$(MAKE) clean -C $(LIBFTDIR)
	@rm -f $(OBJ)

fclean: clean
	@$(MAKE) fclean -C $(LIBFTDIR)
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
