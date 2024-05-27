

#ifndef Intern_HPP
#define Intern_HPP

#include "Form.hpp"

class Intern
{

    public:
        Intern();
        ~Intern();
        Form * makeForm(std::string name, std::string target);
} ;

#endif