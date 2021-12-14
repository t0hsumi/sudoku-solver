NAME	= sudoku_solver

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

SRCS	= $(wildcard ./*.c)
OBJS	= $(SRCS:c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
