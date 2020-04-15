CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCDIR = ./srcs

SRCS = $(SRCDIR)/ft_advanced_doop.c \
	   $(SRCDIR)/ft_atoi.c \
	   $(SRCDIR)/functions.c \
	   $(SRCDIR)/libft.c \
	   $(SRCDIR)/main.c

OBJ = $(SRCS:.c=.o)

INCL = ./includes/ft_advanced_doop.h \
	   ./includes/ft_opp.h

NAME = ft_advanced_do-op

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
