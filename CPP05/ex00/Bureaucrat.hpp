//
// Created by Nelson Amerei on 7/13/21.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat {
private:
    std::string _name;
    unsigned short int _grade; //150 to 1

public:
    Bureaucrat(const std::string &name, const unsigned short int grade);
//    Bureaucrat(const Bureaucrat &orig);
    void GradeTooHighException(const unsigned short int grade) const;
    void GradeTooLowException(const unsigned short int grade) const ;

    const std::string &get_name() const;

    unsigned short get_grade() const;
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &fixed);

#endif //EX00_BUREAUCRAT_HPP
