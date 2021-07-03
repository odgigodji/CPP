NAME = ex02

SRC = Weapon.cpp \
      HumanA.cpp \
      HumanB.cpp \
      main.cpp

INC = HumanB.hpp Weapon.hpp HumanA.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re