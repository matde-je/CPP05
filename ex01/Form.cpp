#include "Form.hpp"

Form::Form(const std::string name): name(name), grade_exec(0), grade_sign(0)
{
    _signed = false;
}

Form::~Form(void)
{
    return ;
}

std::ostream &operator<<(std::ostream &os, Form &fo)
{
    os << fo.getName() << ", form grade exec " << fo.getGradexec() << ", form grade sign " << fo.getGradesign() << ", form sign " << fo.getsigned() << ".";
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

bool Form::getsigned()
{
    return (_signed);
}