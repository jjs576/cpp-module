#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Intern intern;
	Form* rForm;
	Form* sForm;
	Form* pForm;
	Form* falseForm;

	Bureaucrat yesman("yesman", 1);


	rForm = intern.makeForm("robotomy request", "inovation_academy");
	sForm = intern.makeForm("shrubbery creation", "my_house");
	pForm = intern.makeForm("presidential pardon", "blue_house");

	try {
		falseForm = intern.makeForm("hhhhh", "hhh");
	} catch (std::exception const &exception) {
		std::cout << std::endl;
		std::cout << exception.what() << std::endl;
		std::cout << std::endl;
	}

	std::cout << "------------sign form-------------" << std::endl;
	yesman.signForm(*sForm);
	yesman.signForm(*rForm);
	yesman.signForm(*pForm);

	std::cout << "------------excute form-------------" << std::endl;
	yesman.excuteForm(*rForm);
	yesman.excuteForm(*sForm);
	yesman.excuteForm(*pForm);

	delete rForm;
	delete sForm;
	delete pForm;

	return 0;
}
