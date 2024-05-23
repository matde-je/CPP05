
#ifndef SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;



} ;



#endif