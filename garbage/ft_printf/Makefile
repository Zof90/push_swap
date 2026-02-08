NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
INCLUDES = -I. -I$(LIBFT_DIR)
all:$(NAME)
$(NAME):$(OBJ)
		make -C $(LIBFT_DIR)
		cp $(LIBFT) $(NAME)
		ar rcs $(NAME) $(OBJ)
%.o:%.c
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
clean:
		rm -f $(OBJ)
		make -C $(LIBFT_DIR) clean
fclean:clean
		rm -f $(NAME)
		make -C $(LIBFT_DIR) fclean
re:fclean all
.PHONY:all clean fclean re

