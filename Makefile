NAME	= sudoku_solver

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
DEBUG	= -g -fsanitize=address

SRCS	= main.c output.c input.c checker.c solver.c
OBJS	= $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) $(DEBUG) -c $< -o $@

all:		$(NAME) ## build executable file

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(DEBUG) -o $(NAME) $(OBJS)

clean: ## remove .o files
	rm -f $(OBJS)

fclean: clean ## remove binary (.o and executable) files
	rm -f $(NAME)

re: fclean all ## rebuild 

help: ## Display this help screen
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-20s\033[0m %s\n", $$1, $$2}'

.PHONY: all clean fclean re help
