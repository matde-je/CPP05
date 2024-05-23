
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat* bur2 = new Bureaucrat("bele", 140);

    ShrubberyCreationForm shru("shru");
    bur2->signForm(shru);

    shru.execute(*bur2);
    delete bur2;
}