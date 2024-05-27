#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


//if a member function is not declared as const, 
//it cannot be called on a const object. 
class Form
{
    protected:
        const std::string name;
        bool _signed;
        const int grade_sign;
        const int grade_exec;

    public:
        Form(const std::string name, int gradeexec, int gradesign);
        virtual ~Form();
        Form(Form const & copy);
        Form & operator =(Form const & src);
        
        std::string getName() const;
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

std::ostream &operator<<(std::ostream &os, Form &fo);

#endif