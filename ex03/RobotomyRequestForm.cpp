
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robot", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return ;
}

int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::cout << "Drilling noises\n";
    try
    {
        if (_signed != true)
            throw 505;
        if (executor.getGrade() > grade_exec)
            throw 404;
        std::cout << this->target << " has been robotomized successfully 50% of the time\n";
    }
    catch(int mynum)
    {
        if (mynum == 505)
            std::cerr << "AForm is not signed" << '\n';
        if (mynum == 404)
            std::cerr << "Grade not high enough" << '\n';
        return 1;
    }
    return 0;
}