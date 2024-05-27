
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
    Bureaucrat* bur2 = new Bureaucrat("bele", 5);

    ShrubberyCreationForm shru("shru");
    bur2->signForm(shru);

    shru.execute(*bur2);
    bur2->executeForm(shru);

    RobotomyRequestForm rot("robotomy request");

    bur2->signForm(rot);

    rot.execute(*bur2);
    bur2->executeForm(rot);

    PresidentialPardonForm pres("pres");

    bur2->signForm(pres);

    pres.execute(*bur2);
    bur2->executeForm(pres);

    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    bur2->executeForm(*rrf);
    delete rrf;
    delete bur2;
}