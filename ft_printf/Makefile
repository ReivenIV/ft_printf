# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#   By: darling <darling@student.42.fr>            +#+  +:+       +#+          #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 15:22:01 by fwebe-ir          #+#    #+#              #
#    Updated: 2024/12/04 09:57:31 by fwebe-ir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_print_hex_handler.c ft_print_p.c ft_putnbr.c \
ft_strlen.c count_digits.c ft_print_int.c ft_print_c.c \
ft_print_str.c

OBJS = $(SRCS:.c=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created successfully"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled $< to $@"

clean:
	@rm -f $(OBJS)
	@echo ".o files cleaned"

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) cleaned."

re: fclean all

.PHONY: all clean fclean re