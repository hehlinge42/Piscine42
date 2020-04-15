CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCDIR = ./srcs

SRCS = $(SRCDIR)/ft_libft.c \
	   $(SRCDIR)/ft_eval_expr.c \
	   $(SRCDIR)/ft_remove_whtsp.c \
	   $(SRCDIR)/main.c

OBJ = $(SRCS:.c=.o)

INCL = ./includes/ft_eval_expr.h

NAME = eval_expr

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -I $(INCL) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
