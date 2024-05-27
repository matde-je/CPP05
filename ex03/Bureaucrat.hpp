
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Form ;

//The function is not allowed to modify any non-static 
//data members of the class it belongs to.
//The function can be called on both const and non-const
// instances of the class.
class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator=(const Bureaucrat &copy);

        std::string getName();
        int getGrade() const;
        void increment(void);
        void decrement(void);
        void signForm(Form &f1);
        void executeForm(Form const & form);
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