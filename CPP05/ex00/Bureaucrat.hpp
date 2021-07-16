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
    Bureaucrat(const std::string &name);
//    Bureaucrat(const Bureaucrat &orig);
    void GradeTooHighException(const unsigned short int grade);
    void GradeTooLowException(const unsigned short int grade);

    const std::string &get_name() const;

    unsigned short get_grade() const;
};


#endif //EX00_BUREAUCRAT_HPP
