NAME = form0

SRC = 	Bureaucrat.cpp \
		Form.cpp	\
      	main.cpp

INC =   Bureaucrat.hpp \
		Form.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
