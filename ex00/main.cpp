#include "Bureaucrat.hpp"

int main()
{
    // Bureaucrat bur("bela", 151);
    // Bureaucrat bur1("beli", 150);
    // Bureaucrat bur2("bele", 1);
    // Bureaucrat bur3("belo", 0);
    Bureaucrat* bur = new Bureaucrat("bela", 151);
    Bureaucrat* bur1 = new Bureaucrat("beli", 150);
    Bureaucrat* bur2 = new Bureaucrat("bele", 1);
    Bureaucrat* bur3 = new Bureaucrat("belo", 0);

    std::cout << std::endl;

    std::cout << *bur1 << std::endl;
    std::cout << *bur2 << std::endl;
    std::cout << std::endl;

    bur1->decrement();
    bur2->increment();
    std::cout << std::endl;

    bur1->increment();
    bur2->decrement();
    std::cout << std::endl;

    std::cout << *bur1 << std::endl;
    std::cout << *bur2 << std::endl;

    delete bur;
    delete bur1;
    delete bur2;
    delete bur3;

}