#include "AForm.hpp"

//Since name is declared as a const std::string, it must be initialized in the member initializer list of the constructor 
//rather than assigning it inside the constructor body.
Bureaucrat::Bureaucrat(const std::string name, int grade): name(name)
{
    try
    {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        else
            this->grade = grade;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.type() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.type() << std::endl;
    }
}

Bureaucrat::~Bureaucrat(void)
{
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
	{
		grade = copy.grade;
	}
	return (*this);
}

std::string Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::increment(void)
{
    try
    {
        if (grade -1 < 1)
            throw GradeTooHighException();
        else if (grade -1 > 150)
            throw GradeTooLowException();
        else
            this->grade -= 1;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.type() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.type() << std::endl;
    }
}

void Bureaucrat::decrement(void)
{
    try
    {
        if (grade +1 < 1)
            throw GradeTooHighException();
        else if (grade +1 > 150)
            throw GradeTooLowException();
        else
            this->grade += 1;
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.type() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.type() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bur)
{
    os << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
    return os;
}

void Bureaucrat::signForm(AForm &fo)
{
    try
    {
        fo.beSigned(*this);
        std::cout << "Form signed\n";
    }
    catch(const std::exception& e)
    {
        std::cout << "Couldnt sign form\n";
    }
    
}

void    Bureaucrat::executeForm(AForm const & form)
{
    if (form.execute(*this) == 0)
        std::cout << this->name << " executed " << form.getName() << "\n";
    else
        std::cout << "Couldnt execute form\n";
}

const char * Bureaucrat::GradeTooHighException::type() const throw()
{
    return ("Bureaucrat grade is too high");
}

const char * Bureaucrat::GradeTooLowException::type() const throw()
{
    return ("Bureaucrat grade is too low");
}
