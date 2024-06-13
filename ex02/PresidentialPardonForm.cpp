

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("President", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return ;
}

int PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (_signed != true)
            throw 505;
        if (executor.getGrade() > grade_exec)
            throw 404;
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.\n";
    }
    catch(int mynum)
    {
        if (mynum == 505)
            std::cerr << "AForm is not signed" << '\n';
        if (mynum == 404)
            std::cerr << "Grade not high enough" << '\n';
        return (1);
    }
    return 0;
}