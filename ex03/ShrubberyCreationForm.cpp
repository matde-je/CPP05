
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return ;
}

//catch what is thrown
//execute the form’s action of the concrete class
int ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (_signed != true)
            throw 505;
        if (executor.getGrade() > grade_exec)
            throw 404;
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

