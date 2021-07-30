NAME = array

SRC = main.cpp

INC =  Array.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
