CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCDIR = ./srcs

SRCS = $(SRCDIR)/ft_libft.c \
	   $(SRCDIR)/ft_read_buffer.c \
	   $(SRCDIR)/ft_rush2.c \
	   $(SRCDIR)/rush00.c \
	   $(SRCDIR)/rush01.c \
	   $(SRCDIR)/rush02.c \
	   $(SRCDIR)/rush03.c \
	   $(SRCDIR)/rush04.c \
	   $(SRCDIR)/main.c

OBJ = $(SRCS:.c=.o)

INCL = ./includes/rush2.h

NAME = colle-2

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -I $(INCL) $(OBJ) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
