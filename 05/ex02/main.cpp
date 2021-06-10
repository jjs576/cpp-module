#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	{
		Bureaucrat yespark("yespark", 6);
		Bureaucrat nopark("nopark", 138);

		Form *cherryTree = new ShrubberyCreationForm("cherryTree");
		Form *ordinaryTree = new ShrubberyCreationForm("ordinaryTree");

		std::cout << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------sign OK--------------------" << std::endl;
		std::cout << "---------excute OK------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << yespark << std::endl;
		std::cout << *cherryTree << std::endl;
		std::cout << std::endl;

		yespark.signForm(*cherryTree);
		yespark.excuteForm(*cherryTree);

		std::cout << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------sign Not Yet---------------" << std::endl;
		std::cout << "---------excute NO------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << nopark << std::endl;
		std::cout << *ordinaryTree << std::endl;
		std::cout << std::endl;

		nopark.excuteForm(*ordinaryTree);

		std::cout << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------sign Yes-------------------" << std::endl;
		std::cout << "---------excute NO------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << nopark << std::endl;
		std::cout << *ordinaryTree << std::endl;
		std::cout << std::endl;

		nopark.signForm(*ordinaryTree);
		nopark.excuteForm(*ordinaryTree);

		delete cherryTree;
		delete ordinaryTree;
	}

	std::cout << std::endl;

	{

		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------robo test--------------------" << std::endl;
		std::cout << "---------robo test------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;

		Bureaucrat yespark("yespark", 1);
		Form *robo = new RobotomyRequestForm("robo");
		yespark.signForm(*robo);
		yespark.excuteForm(*robo);

		delete robo;
	}

	std::cout << std::endl;

	{

		std::cout << "------------------------------------" << std::endl;
		std::cout << "---------pres test--------------------" << std::endl;
		std::cout << "---------pres test------------------" << std::endl;
		std::cout << "------------------------------------" << std::endl;

		Bureaucrat yespark("yespark", 1);
		Form *president = new PresidentialPardonForm("president");
		yespark.signForm(*president);
		yespark.excuteForm(*president);
		delete president;
	}

	std::cout << "\n\n" << std::endl;

	return (0);
}
