NAME	= test

DIR_O = ./obj

SRCS	= main.cpp Test.cpp

OBJS	= $(addprefix $(DIR_O)/,${SRCS:.cpp=.o})

FLAGS	= -std=c++98 -Wall -Wextra -Werror

CC		= clang++

HEADER	= Array.hpp Test.hpp

all:	dir $(NAME) done

done:
		@echo "\n\033[0;32m|___Done___|"

$(NAME): $(OBJS)
		@echo "\033[0;35m"
		$(CC) $(OBJS) -o $(NAME)
		chmod 777 $(NAME)

dir:
		@echo "\033[0;35m\b"
		mkdir -p obj
		@echo "\033[0;35m"

$(DIR_O)/%.o: %.cpp $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

clean:
		@echo "\033[0;33m\b"
		$(RM) $(OBJS)
		rm -rf $(DIR_O)

fclean: clean
		@echo "\033[0;31m"
		$(RM) $(NAME)

re:		fclean all

.PHONY:
		all, clean, fclean, re
