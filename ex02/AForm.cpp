#include "AForm.hpp"

AForm::AForm(const std::string name, int gradesign, int gradeexec): name(name), grade_sign(gradesign), grade_exec(gradeexec)
{
    _signed = false;
    try
    {
        if (gradeexec < 1 || gradesign < 1)
            throw GradeTooHighException();
        else if (gradeexec > 150 || gradesign > 150)
            throw GradeTooLowException();
    }
    catch (AForm::GradeTooHighException &e)
    {
        std::cout << e.type() << std::endl;
    }
    catch (AForm::GradeTooLowException &e)
    {
        std::cout << e.type() << std::endl;
    }
}

AForm::~AForm(void)
{
    return ;
}

std::ostream &operator<<(std::ostream &os, AForm &fo)
{
    os << fo.getName() << ", AForm grade exec " << fo.getGradexec() << ", AForm grade sign " << fo.getGradesign() << ", AForm sign " << fo.getSigned() << ".";
    return os;
}

std::string AForm::getName()
{
    return (this->name);
}

int AForm::getGradexec()
{
    return (grade_exec);
}

int AForm::getGradesign()
{
    return (grade_sign);
}

bool AForm::getSigned()
{
    return (_signed);
}

void AForm::beSigned(Bureaucrat const &bur)
{
    try
    {
        if (bur.getGrade() > grade_sign)
            throw GradeTooLowException();
        else
            _signed = true;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.type() << std::endl;
    }
}

const char * AForm::GradeTooHighException::type() const throw()
{
    return ("AForm grade is too high");
}

const char * AForm::GradeTooLowException::type() const throw()
{
    return ("AForm grade is too low");
}