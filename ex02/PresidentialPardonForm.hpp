
#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;

    public:
        PresidentialPardonForm(std::string target);
        virtual ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;

} ;

#endif