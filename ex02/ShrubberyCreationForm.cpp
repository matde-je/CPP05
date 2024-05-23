
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return ;
}

//catch what is thrown
//execute the form’s action of the concrete class
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    (void) executor;
    try
    {
        if (_signed != true)
            throw 505;
        else
        {
            std::ofstream MyFile((target + "_shrubbery").c_str());
            MyFile << "           \\/ |    |/\n";
            MyFile << "        \\/ / \\||/  /_/___/_\n";
            MyFile << "         \\//   |/ \\/\n";
            MyFile << "    _\\__\\_\\   |  /_____/_\n";
            MyFile << "           \\  | /          /\n";
            MyFile << "  __ _-----`  |{,-----------~\n";
            MyFile << "            \\ }{\n";
            MyFile << "             }{{\n";
            MyFile << "             }}{\n";
            MyFile << "             {{}\n";
            MyFile.close();
        }
    }
    catch(...)
    {
        std::cerr << "AForm is not signed" << '\n';
    }
    
}

