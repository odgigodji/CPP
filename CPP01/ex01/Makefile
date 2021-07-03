NAME = ex01

SRC = main.cpp  \
	Zombie.cpp \
    zombieHorde.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

INC =  Zombie.hpp

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re