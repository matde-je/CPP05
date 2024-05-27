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

Form::Form(const Form &copy) : name(copy.name), grade_sign(copy.grade_sign), grade_exec(copy.grade_exec)
{
    std::cout << "copy called\n";
	*this = copy;
}

Form & Form::operator =(Form const & src)
{
    if (this != &src)
    {
        _signed = src._signed;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &os, Form &fo)
{
    os << fo.getName() << ", Form grade exec " << fo.getGradexec() << ", Form grade sign " << fo.getGradesign() << ", Form sign " << fo.getSigned() << ".";
    return os;
}

std::string Form::getName() const
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

void Form::beSigned(Bureaucrat const &bur)
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