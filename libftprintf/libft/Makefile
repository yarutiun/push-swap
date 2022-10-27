#compiler settings
CC=gcc
CCFLAGS = -std=c11 -Wall -Wextra -Werror
OBJDIR=obj
#dependencies
NAME = libft.a


all: $(NAME)

$(NAME): $(OBJDIR) *.o
	@ar -rc $(NAME) $(OBJDIR)/*.o
*.o: *.c $(OBJDIR)
	@$(CC) -c $(CCFLAGS) *.c
	@mv *.o $(OBJDIR)
$(OBJDIR): 
	@mkdir $(OBJDIR)
.PHONY: clean fclean re
#delete all files
fclean: clean
	@rm -rf *.a
#remove all temporary files
clean:
	@rm -rf $(OBJDIR)
bonus : all
#rebuild project
re: fclean clean all