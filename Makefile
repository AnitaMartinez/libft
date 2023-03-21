CC=gcc
CFLAGS=-Wall -Wextra -Werror
SOURCE= main.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_isascii.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero \
	ft_memcy

all: program

program: $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o program
