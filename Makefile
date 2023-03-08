# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anamart3 <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:50:49 by anamart3          #+#    #+#              #
#    Updated: 2023/03/07 15:34:30 by anamart3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a
RM=		rm -f
SRCS=	main.c \
		isdigit.c
CC=		gcc
CFLAGS=	-Wall -Wextra -Werror

all:	$(NAME)

clean:	$(RM)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS)
