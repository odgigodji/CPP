NAME = scavTrap

SRC = 	ClapTrap.cpp  \
		ScavTrap.cpp \
      	main.cpp

INC =   ClapTrap.hpp ScavTrap.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
