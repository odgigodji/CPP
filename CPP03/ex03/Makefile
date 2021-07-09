NAME = diamondTrap

SRC = ScavTrap.cpp		\
      ClapTrap.cpp		\
      main.cpp			\
      DiamondTrap.cpp	\
      FragTrap.cpp

INC =  DiamondTrap.hpp ClapTrap.hpp FragTrap.hpp ScavTrap.hpp

CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
