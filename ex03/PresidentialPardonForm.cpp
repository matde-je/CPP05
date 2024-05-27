

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("President", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return ;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    (void) executor;
    try
    {
        if (_signed != true)
            throw 505;
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox.\n";
    }
    catch(...)
    {
        std::cerr << "Form is not signed" << '\n';
    }

}