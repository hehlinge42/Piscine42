# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hehlinge <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/19 18:06:50 by hehlinge          #+#    #+#              #
#    Updated: 2019/02/20 19:24:59 by hehlinge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c \
	  ./srcs/ft_putstr.c \
	  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c \
	  ./srcs/ft_swap.c

OBJ = $(SRC:.c=.o)
 
INCLUDE = ./includes

CC = gcc

FLAGS = -Wall -Wextra -Werror

ARFLAGS = rc

all: $(NAME)

$(NAME): $(OBJ)
	ar $(ARFLAGS) $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
