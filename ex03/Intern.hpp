#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include "Form.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();
		Form * makeForm(std::string name, std::string target);
		Intern &		operator=( Intern const &);



};

#endif /* ********************************************************** INTERN_H */