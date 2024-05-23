#include "Form.hpp"

Form::Form(const std::string name, int gradesign, int gradeexec): name(name), grade_sign(gradesign), grade_exec(gradeexec)
{
    _signed = false;
    try
    {
        if (gradeexec < 1 || gradesign < 1)
            throw GradeTooHighException();
        else if (gradeexec > 150 || gradesign > 150)
            throw GradeTooLowException();
    }
    catch (Form::GradeTooHighException &e)
    {
        std::cout << e.type() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << e.type() << std::endl;
    }
}

Form::~Form(void)
{
    return ;
}

std::ostream &operator<<(std::ostream &os, Form &fo)
{
    os << fo.getName() << ", Form grade exec " << fo.getGradexec() << ", Form grade sign " << fo.getGradesign() << ", Form sign " << fo.getSigned() << ".";
    return os;
}

std::string Form::getName()
{
    return (this->name);
}

int Form::getGradexec()
{
    return (grade_exec);
}

int Form::getGradesign()
{
    return (grade_sign);
}

bool Form::getSigned()
{
    return (_signed);
}

void Form::beSigned(Bureaucrat &bur)
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

const char * Form::GradeTooHighException::type() const throw()
{
    return ("Form grade is too high");
}

const char * Form::GradeTooLowException::type() const throw()
{
    return ("Form grade is too low");
}