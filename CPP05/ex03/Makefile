NAME = bureaucrat3

SRC = ShrubberyCreationForm.cpp		\
	  Bureaucrat.cpp		\
	  RobotomyRequestForm.cpp		\
	  main.cpp		\
	  PresidentialPardonForm.cpp		\
	  AForm.cpp

INC =   Bureaucrat.hpp	\
		PresidentialPardonForm.hpp	\
		RobotomyRequestForm.hpp	\
		AForm.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INC)
	clang++ $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
