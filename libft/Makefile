#include src/Makefile 

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) 
		@ar -crs $(NAME) $(OBJ)

$(OBJ): $(SRC)
		@gcc $(CFLAGS) -c $(SRC)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all
