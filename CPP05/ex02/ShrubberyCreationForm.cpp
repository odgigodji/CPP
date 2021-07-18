//
// Created by Nelson Amerei on 17.07.21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) {
	set_target(target);

	std::cout << MAG"ShrubberyCreationForm with target <" << get_target() << "> was created.";
	std::cout << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &i) {
	set_name(i.get_name());
	set_signGradeNeed(i.get_signGradeNeed());
	set_execGradeNeed(i.get_execGradeNeed());
	set_signed(i.is_signed());
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
	set_name(rhs.get_name());
	set_signGradeNeed(rhs.get_signGradeNeed());
	set_execGradeNeed(rhs.get_execGradeNeed());
	set_signed(rhs.is_signed());
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::doAction() const {
	std::cout << CYN"ShrubberyCreationForm: doAction";
	std::cout << " - check file \"<target>_shrubbery.\"";
	std::cout << RESET << std::endl;

	std::string f = "<";
	f+= get_target();
	std::ofstream outf(f.append("_shrubbery").c_str());

	outf << " 		  *                \n";
	outf << " 		 /|\\              \n";
	outf << "        /*|O\\             \n";
	outf << "       /*/|\\*\\           \n";
	outf << "      /X/O|*\\X\\          \n";
	outf << "     /*/X/|\\X\\*\\        \n";
	outf << "    /O/*/X|*\\O\\X\\       \n";
	outf << "   /*/O/X/|\\X\\O\\*\\     \n";
	outf << "  /X/O/*/X|O\\X\\*\\O\\    \n";
	outf << " /O/X/*/O/|\\X\\*\\O\\X\\  \n";
	outf << "         |X|               \n";
	outf << "         |X|               \0";

	outf.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) {
	try {
		if (executor.get_grade() > 145) { //cant sign
			throw GradeTooLowException();
		}  else {
			set_signed(true);
			std::cout << GRN"Executor Shrubbery signed." << RESET << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << RED"Executor Shrubbery: can't sign. " << e.what();
		std::cout << RESET << std::endl;
	}

	try {
		if (executor.get_grade() > 137) { //cant execute
			throw GradeTooLowException();
		}  else {
			std::cout << GRN"Executor Shrubbery executed." << RESET << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << RED"Executor Shrubbery: can't execute. " << e.what();
		std::cout << RESET << std::endl;
	}
}

