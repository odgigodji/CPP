NAME = animal2

SRC = Cat.cpp	\
      Dog.cpp	\
      Animal.cpp	\
      Brain.cpp	\
      main.cpp

INC =   Cat.hpp	\
        Animal.hpp	\
        Dog.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
