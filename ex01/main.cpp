#include "Form.hpp"

int main()
{

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

    Form* fo5 = new Form("bela", 2, 150);
    bur2->signForm(*fo5);


    delete fo;
    delete fo1;
    delete fo2;
    delete fo3;
    delete fo4;
    delete fo5;
    delete bur2;
}