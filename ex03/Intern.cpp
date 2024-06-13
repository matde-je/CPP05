#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(){}

Intern::Intern( const Intern & src ){
    (void)src;}

Intern::~Intern(){}

Intern &				Intern::operator=( Intern const & ){
	return *this;}




Form * makePresident(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form * makeRobotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form * makeShrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form * Intern::makeForm(std::string name, std::string target)
{
    Form *(*ptr[])(std::string const target) = {&makePresident, &makeRobotomy, &makeShrubbery};

    std::string array[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

    for (int i = 0; i < 3; i++)
    {
        if (name == array[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return (ptr[i](target));
        }
    }    
    std::cout << "Form doesnt exist\n";
    return (NULL);
}
