#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	{
		Bureaucrat yesman("yesman", 6);
		Bureaucrat noman("noman", 138);

		Form *cherryTree = new ShrubberyCreationForm("cherryTree");
		Form *ordinaryTree = new ShrubberyCreationForm("ordinaryTree");

		std::cout << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------sign OK--------------------" << std::endl;
		std::cout << "---------excute OK------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << yesman << std::endl;
		std::cout << *cherryTree << std::endl;
		std::cout << std::endl;

		yesman.signForm(*cherryTree);
		yesman.excuteForm(*cherryTree);

		std::cout << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------sign Not Yet---------------" << std::endl;
		std::cout << "---------excute NO------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << noman << std::endl;
		std::cout << *ordinaryTree << std::endl;
		std::cout << std::endl;

		noman.excuteForm(*ordinaryTree);

		std::cout << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------sign Yes-------------------" << std::endl;
		std::cout << "---------excute NO------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << noman << std::endl;
		std::cout << *ordinaryTree << std::endl;
		std::cout << std::endl;

		noman.signForm(*ordinaryTree);
		noman.excuteForm(*ordinaryTree);

		delete cherryTree;
		delete ordinaryTree;
	}

	std::cout << std::endl;

	{

		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------robo test--------------------" << std::endl;
		std::cout << "---------robo test------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;

		Bureaucrat yesman("yesman", 1);
		Form *robo = new RobotomyRequestForm("robo");
		yesman.signForm(*robo);
		yesman.excuteForm(*robo);

		delete robo;
	}

	std::cout << std::endl;

	{

		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------pres test--------------------" << std::endl;
		std::cout << "---------pres test------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;

		Bureaucrat yesman("yesman", 1);
		Form *president = new PresidentialPardonForm("president");
		yesman.signForm(*president);
		yesman.excuteForm(*president);
		delete president;
	}

	std::cout << "\n\n" << std::endl;

	return (0);
}
