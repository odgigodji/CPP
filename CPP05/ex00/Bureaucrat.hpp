//
// Created by Nelson Amerei on 7/13/21.
//

//class PEBKASException : public std::exception {
//public:
//virtual const char* what()  const throw() {
//	return ("problem exist between keyboard and chair");
//}
//};

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>

class Bureaucrat {
private:
    std::string _name;
    unsigned short int _grade; //150 to 1

public:
    Bureaucrat(const std::string &name, const unsigned short int grade);
	Bureaucrat(Bureaucrat &i);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	~Bureaucrat();

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Grade too high");
			}
		};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Grade too low");
			}
	};

	void upGrade();
	void downGrade();
    const std::string &get_name() const;
	unsigned short get_grade() const;
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &fixed);

#endif //EX00_BUREAUCRAT_HPP
