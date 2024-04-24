
#ifndef BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form ;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        std::string getName();
        int getGrade();
        void increment(void);
        void decrement(void);
        void signForm(Form &f1);
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

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur);

#endif