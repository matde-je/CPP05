#ifndef FORM_HPP

#include <iostream>
#include <string>

class Form
{
    private:
        const std::string name;
        bool _signed;
        const int grade_sign;
        const int grade_exec;

    public:
        Form(const std::string name);
        ~Form();
        std::string getName();
        int getGradesign();
        int getGradexec();
        bool getsigned();

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