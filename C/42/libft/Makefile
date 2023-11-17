CFLAGS = -Wall -Werror -Wextra
CLANG = clang
SRC = ./ft_bzero.c\
	  ./ft_isalnum.c\
	  ./ft_isalpha.c\
	  ./ft_isascii.c\
	  ./ft_isdigit.c\
	  ./ft_isprint.c\
	  ./ft_memchr.c\
	  ./ft_memcmp.c\
	  ./ft_memcpy.c\
	  ./ft_memmove.c\
	  ./ft_memset.c\
	  ./ft_strchr.c\
	  ./ft_strlcat.c\
	  ./ft_strlcpy.c\
	  ./ft_strlen.c\
	  ./ft_strrchr.c\
	  ./ft_tolower.c\
	  ./ft_toupper.c\

OBJ = $(SRC:.c=.o)
INCLUDES = ./libft.h
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

%.o: %.c
	@$(CLANG) $(CFLAGS) -I ./includes/ -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: clean all
