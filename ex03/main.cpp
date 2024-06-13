
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
    Bureaucrat* bur2 = new Bureaucrat("bele", 1);

    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    bur2->signForm(*rrf);
    bur2->executeForm(*rrf);

    delete rrf;
    delete bur2;
}