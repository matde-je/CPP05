#include "Form.hpp"

int main()
{
    // Form fo("bela", 151);
    // Form fo1("beli", 150);
    // Form fo2("bele", 1);
    // Form fo3("belo", 0);
    Form* fo = new Form("bela");
    Form* fo1 = new Form("beli");
    Form* fo2 = new Form("bele");
    Form* fo3 = new Form("belo");

    std::cout << std::endl;

    std::cout << *fo1 << std::endl;
    std::cout << *fo2 << std::endl;
    std::cout << std::endl;


    std::cout << *fo1 << std::endl;
    std::cout << *fo2 << std::endl;

    delete fo;
    delete fo1;
    delete fo2;
    delete fo3;

}