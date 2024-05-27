
#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;

    public:
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;

} ;

#endif