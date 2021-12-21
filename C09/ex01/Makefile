CC=gcc
CFLAGS=-Wall -Wextra -Werror -I includes/
NAME=libft.a
SRC= srcs/ft_putchar.c \
	 srcs/ft_putstr.c \
	 srcs/ft_swap.c \
	 srcs/ft_strlen.c  \
	 srcs/ft_strcmp.c

OBJ= $(SRC:.c=.o)

all: $(NAME)

libft.a: $(OBJ)
	ar cr $(NAME) $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
