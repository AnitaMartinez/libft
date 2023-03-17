CC=gcc
CFLAGS=-Wall -Wextra -Werror
SOURCE= main.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_isascii.c \
	ft_strlen.c

all: program

program: $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o program
