# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psaeyang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 05:36:11 by psaeyang          #+#    #+#              #
#    Updated: 2023/03/17 00:07:20 by psaeyang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
SERVER = server.c
CLIENT = client.c
SRCS = utils.c

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all : $(NAME)

$(NAME) : $(SERVER) $(CLIENT)

server:
	gcc $(CFLAGS) $(SERVER) $(SRCS) -o $(SERVER)

client:
	gcc $(C FLAGS) $(CLIENT) $(SRCS) -o $(CLIENT)

$(OBJS): %.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean :
	RM $(SERVER)
	RM $(CLIENT)

fclean : clean
	RM $(NAME)

re : fclean all

.PHONY re all fclean