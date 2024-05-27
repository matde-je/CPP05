
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat* bur2 = new Bureaucrat("bele", 5);

    ShrubberyCreationForm shru("shru");
    bur2->signForm(shru);

    shru.execute(*bur2);
    bur2->executeForm(shru);

    RobotomyRequestForm rot("rot");

    bur2->signForm(rot);

    rot.execute(*bur2);
    bur2->executeForm(rot);

    PresidentialPardonForm pres("pres");

    bur2->signForm(pres);

    pres.execute(*bur2);
    bur2->executeForm(pres);

    
    delete bur2;
}