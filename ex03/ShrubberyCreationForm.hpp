
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm();
        int execute(Bureaucrat const & executor) const;



} ;



#endif