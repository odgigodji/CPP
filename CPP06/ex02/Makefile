NAME = realtype

SRC = 	main.cpp \
		Base.cpp	\
		A.cpp	\
		B.cpp	\
		C.cpp

INC = A.hpp B.hpp C.hpp Base.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
