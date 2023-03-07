#include src/Makefile 

NAME = testLib.a

CFLAGS = -Wall -Werror -Wextra

# SRC = test_calloc.c test_ft_isalnum.c test_ft_isdigit.c test_ft_memcmp.c \
# 		test_ft_memset.c test_ft_strlcpy.c test_ft_strrchr.c test_strdup.c \
# 		test_ft_atoi.c test_ft_isalpha.c test_ft_isprint.c test_ft_memcpy.c \
# 		test_ft_strchr.c test_ft_strncmp.c test_ft_tolower.c test_ft_bzero.c \
# 		test_ft_isascii.c test_ft_memchr.c test_ft_memmove.c test_ft_strlcat.c \
# 		test_ft_strnstr.c test_ft_toupper.c
SRC = test_ft_isalpha.c

SUITS = suits/

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) 
		@ar -crs $(NAME) $(OBJ)

$(OBJ): $(SRC)
		@gcc $(CFLAGS) -c $(SUITS)$(SRC)

clean:
		@rm -f $(SUITS)$(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all
