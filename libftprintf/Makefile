NAME = libftprintf.a
LIB = libft.a
LIB_D = libft
SRC = src
INC = inc
OBJ = obj
AR = ar rcs
CC = clang
CFLAGS = -Wall -Wextra -Werror -I $(INC)
SRC_F = $(wildcard $(SRC)/*.c)
INC_F = $(wildcard $(INC)/*.h)
OBJ_F = $(SRC_F:.c=.o)
OBJS = $(subst $(SRC),$(OBJ),$(OBJ_F))

GREEN = \033[0;92m
YELLOW = \033[0;93m
DEF_COLOR = \033[0;39m

all: $(NAME)

test: $(OBJS) $(LIB_D)/$(LIB)
	@$(CC) $(FLAGS) $^ -o $@

$(NAME): $(OBJS)
	@make bonus -C $(LIB_D)
	@cp $(LIB_D)/$(LIB) .
	@mv $(LIB) $(NAME)
	@$(AR) $@ $^
	@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

$(OBJ)/%.o:    $(SRC)/%.c $(OBJ)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ): 
	@mkdir -p $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C $(LIB_D)
	@echo "$(YELLOW)Evrything was cleaned $(DEF_COLOR)"
re: fclean all