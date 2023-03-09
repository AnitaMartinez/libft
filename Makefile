NAME = libft.a
MY_SOURCES = ft_isalpha.c \
			ft_isdigit.c  \
			ft_isalnum.c \
			ft_isascii.c \
			ft_strlen
MY_OBJECTS = $(MY_SOURCES:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
$(NAME): $(MY_OBJECTS)
		@ar r $(NAME) $(MY_OBJECTS)

all:    $(NAME)
clean:
	@rm -f $(MY_OBJECTS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
