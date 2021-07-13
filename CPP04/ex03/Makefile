NAME = animal2

SRC =AMateria.cpp		\
     Character.cpp		\
     Cure.cpp		\
     Ice.cpp		\
     main.cpp		\
     MateriaSource.cpp

INC =   Ice.hpp	\
        Cure.hpp	\
        AMateria.hpp	\
        Character.hpp	\
        IMateriaSource.hpp	\
        MateriaSource.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
