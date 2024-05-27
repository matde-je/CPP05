
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robot", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    (void) executor;
    std::cout << "Drilling noises\n";
    try
    {
        if (_signed != true)
            throw 505;
        std::cout << this->target << " has been robotomized successfully 50% of the time\n";
    }
    catch(...)
    {
        std::cerr << "Form is not signed" << '\n';
    }

}