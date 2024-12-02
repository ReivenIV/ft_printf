# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 15:22:01 by fwebe-ir          #+#    #+#              #
#    Updated: 2024/12/02 15:57:03 by fwebe-ir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = count_digits.c ft_putchar.c ft_putstr.c ft_printf.c ft_print_int.c \
ft_putnbr.c ft_strlen.c
OBJS = $(SRCS:.c=.o)
HEADERS = ft_printf.h 

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created successfully"

%.o: %.c $(HEADERS)
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