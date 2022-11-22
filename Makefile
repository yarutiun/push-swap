# Compilation
NAME = push_swap
CC = clang
CFLAGS = -Wall -Wextra -Werror -g
DEBUG = -fsanitize=address
LEAKS = leaks -atExit -- ./push-swap

# Libraries
LIBFTPRINTF_A = libftprintf/libftprintf.a

# Paths
SRC_PATH = src/
OBJ_PATH = obj/
LIBFTPRINTF = libftprintf

# Source and object files
SRCS =	src/main.c src/last_step_sort.c \
		src/node_create.c src/parse.c src/utils.c \
		src/intructions.c src/sort_3.c \
		src/sort_5_100.c src/utils2.c src/execution.c \
		src/assigning.c

OBJ		= $(SRCS:.c=.o)

# Rules
all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(DEBUG) $(OBJ) $(LIBFTPRINTF_A) -o $(NAME)
	mv $(OBJ) $(OBJ_PATH)

clean:
	rm -rf $(OBJ_PATH)
	$(MAKE) clean -C $(LIBFTPRINTF)

fclean: clean
	rm -f $(NAME)
	$(MAKE) clean -C $(LIBFTPRINTF)
	
re: fclean all

.PHONY: all clean fclean re
