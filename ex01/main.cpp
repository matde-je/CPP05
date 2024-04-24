#include "Form.hpp"

int main()
{
    // Form fo("bela", 151);
    // Form fo1("beli", 150);
    // Form fo2("bele", 1);
    // Form fo3("belo", 0);
    Form* fo = new Form("bela", 150, 2);
    Form* fo2 = new Form("bele", 1, 150);

    std::cout << std::endl;
    Form* fo1 = new Form("beli", 151, 2);
    Form* fo3 = new Form("belo", 1, 151);
    Form* fo4 = new Form("bele", 0, 150);
    std::cout << std::endl;

    Bureaucrat* bur2 = new Bureaucrat("bele", 1);

    std::cout << fo->getGradesign() << std::endl;
    std::cout << fo2->getGradexec() << std::endl;

    fo2->beSigned(*bur2);
    std::cout << fo2->getSigned() << std::endl;

    bur2->signForm(*fo2);

    std::cout << std::endl;

    delete fo;
    delete fo1;
    delete fo2;
    delete fo3;
    delete fo4;
    delete bur2;
}