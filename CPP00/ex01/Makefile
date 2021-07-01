NAME = myphonebook
SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CC = clang++ -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) $(OBJ)
	$(CC) -o $(NAME) $(OBJ)
	$(RM) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
