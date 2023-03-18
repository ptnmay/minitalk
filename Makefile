# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 05:36:11 by psaeyang          #+#    #+#              #
#    Updated: 2023/03/18 18:15:28 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server.c
CLIENT = client.c

OBJ_S = $(SERVER:.c=.o)
OBJ_C = $(CLIENT:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

NAME_S = server
NAME_C = client

all : $(NAME_S) $(NAME_C)

$(NAME_S) : $(OBJ_S)
				$(CC) $(CFLAGS) -o $(NAME_S) $(OBJ_S)
$(NAME_C) : $(OBJ_C)
				$(CC) $(CFLAGS) -o $(NAME_C) $(OBJ_C)

fclean :
	RM $(NAME_S)
	RM $(NAME_C)

re : fclean all

.PHONY: re all fclean