
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

//public members of the base class public in the derived class, 
//and the protected members of the base class remain protected in the derived class.

class RobotomyRequestForm: public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm(std::string target);
        virtual ~RobotomyRequestForm();
        int execute(Bureaucrat const & executor) const;
    
};

#endif