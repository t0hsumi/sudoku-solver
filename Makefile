NAME	= sudoku_solver

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
DEBUG	= -g

SRCS	= main.c output.c input.c checker.c solver.c
OBJS	= $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) $(DEBUG) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(DEBUG) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
