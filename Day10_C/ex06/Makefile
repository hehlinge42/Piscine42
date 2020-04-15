CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCDIR = ./srcs

SRCS = $(SRCDIR)/doop.c \
	   $(SRCDIR)/ft_atoi.c \
	   $(SRCDIR)/functions.c \
	   $(SRCDIR)/libft.c \
	   $(SRCDIR)/main.c

OBJ = $(SRCS:.c=.o)

INCL = ./includes/doop.h

NAME = do-op

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -I $(INCL) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
