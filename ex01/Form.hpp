#ifndef Form_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool _signed;
        const int grade_sign;
        const int grade_exec;

    public:
        Form(const std::string name, int gradeexec, int gradesign);
        ~Form();
        Form(Form const & copy);
        Form & operator =(Form const & src);
        
        std::string getName();
        int getGradesign();
        int getGradexec();
        bool getSigned();
        void beSigned(Bureaucrat &bur);
        class GradeTooHighException : public std::exception
        {
            public :
               const char* type() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
                const char* type() const throw();
        };

} ;

std::ostream &operator<<(std::ostream &os, Form &fo);

#endif