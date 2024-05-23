#ifndef AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


//if a member function is not declared as const, 
//it cannot be called on a const object. 
class AForm
{
    protected:
        const std::string name;
        bool _signed;
        const int grade_sign;
        const int grade_exec;

    public:
        AForm(const std::string name, int gradeexec, int gradesign);
        ~AForm();
        std::string getName();
        int getGradesign();
        int getGradexec();
        bool getSigned();
        void beSigned(Bureaucrat const &bur);
        virtual void execute(Bureaucrat const & executor) const = 0;
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

std::ostream &operator<<(std::ostream &os, AForm &fo);

#endif