NAME = ex00

SRC = main.cpp	\
      newZombie.cpp  \
      randomChump.cpp \
      Zombie.cpp \

INC = Zombie.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re