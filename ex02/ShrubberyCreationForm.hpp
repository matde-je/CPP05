
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"


//If the base class already implements the orthodox canonical 
//class form, the derived class will automatically inherit these members.
class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm(std::string target);
        virtual ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;



} ;



#endif