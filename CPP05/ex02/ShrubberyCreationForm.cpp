//
// Created by Nelson Amerei on 17.07.21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) {
	set_target(target);
	set_signGradeNeed(145);
	set_execGradeNeed(137);

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

	std::string f = "<"; //name of file for output
	f+= get_target();
	std::ofstream outf(f.append(">_shrubbery").c_str());

	std::cout << CYN"ShrubberyCreationForm: doAction";
	std::cout << " - check file \"" << f << "\".";
	std::cout << RESET << std::endl;

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

bool ShrubberyCreationForm::execute(Bureaucrat const &executor) {
	try {
		if (executor.get_grade() > get_signGradeNeed() && !is_signed()) { //cant sign
			throw GradeTooLowException();
		}
		else {
			if (!is_signed()) {
				std::cout << GRN"<" << executor.get_name() << "> successfully signed <";
				std::cout << get_target() << ">"RESET << std::endl;
			}
			set_signed(true);
		}
	}
	catch (std::exception &e) {
		std::cout << RED"Executor Shrubbery: can't sign, <";
		std::cout << executor.get_name() << ">'s " << e.what();
		std::cout << RESET << std::endl;
	}

	try {
		//check grade and is signed
		if (executor.get_grade() > get_execGradeNeed() || !is_signed()) {
			throw GradeTooLowException();
		}
		else {
			std::cout << GRN"<" << executor.get_name() << "> execution permit <";
			std::cout << get_target() << ">"RESET << std::endl;
//			doAction();
		}
	}
	catch (std::exception &e) {
//		std::cout << RED"Executor Shrubbery: can't execute, <";
//		std::cout << executor.get_name() << ">'s " << e.what();
//		std::cout << RESET << std::endl;
	}
	return (is_signed());
}

