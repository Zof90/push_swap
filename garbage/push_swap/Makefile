# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schouite <schouite@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/01 18:22:33 by schouite          #+#    #+#              #
#    Updated: 2026/02/06 16:12:13 by schouite         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -g -Wall -Werror -Wextra 
NAME = push_swap
BONUS = checker
SRC = $(wildcard srcs/*.c)
OBJ = $(SRC:.c=.o)
BONUS_SRC = $(filter-out srcs/main.c, $(wildcard srcs/*.c)) $(wildcard checker_bonus/*.c)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
HEADER = includes/push_swap.h
BONUS_HEADER = checker_bonus/checker.h

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./ft_printf/libft
	make -C ./ft_printf
	make -C ./get_next_line
	$(CC) $(CFLAGS) $(OBJ) -Iincludes ft_printf/libft/libft.a ft_printf/libftprintf.a get_next_line/gnl.a -o $(NAME)

bonus: $(BONUS)

$(BONUS): $(BONUS_OBJ)
	make -C ./ft_printf/libft
	make -C ./ft_printf
	make -C ./get_next_line
	$(CC) $(CFLAGS) $(BONUS_OBJ) -Iincludes ft_printf/libft/libft.a ft_printf/libftprintf.a get_next_line/gnl.a -o $(BONUS)	

srcs/%.o: srcs/%.c $(HEADER)
	$(CC) $(CFLAGS) -Iincludes -Ift_printf -Iget_next_line -Ift_printf/libft -c $< -o $@

checker_bonus/%.o: checker_bonus/%.c $(BONUS_HEADER) $(HEADER)
	$(CC) $(CFLAGS) -Iincludes -Ichecker_bonus -Ift_printf -Iget_next_line -Ift_printf/libft -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)
	make -C ./ft_printf/libft clean
	make -C ./ft_printf clean
	make -C ./get_next_line clean
	
fclean: clean
	rm -f $(NAME) $(BONUS)
	make -C ./ft_printf/libft fclean
	make -C ./ft_printf fclean
	make -C ./get_next_line fclean
	
re: fclean all

# test:
# 	@echo "SRC: $(SRC)"
# 	@echo "OBJ: $(OBJ)"
