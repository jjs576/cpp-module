#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &tar) : Form("robotomy request", 45, 72), target(tar)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &sh) : Form(sh.getName(), 45, 72), target(sh.target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &sh) {
	if (this != &sh)
		this->target = sh.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::excute(Bureaucrat const &excutor) const
{
	this->Form::checkExcute(excutor);
	srand(time(NULL));
	int ran = rand() % 2;
	if (ran)
		std::cout << "<" << this->target << "> has been robotomized successfully" << std::endl;
	else
		std::cout << "<" << this->target << "> failed to robotomized" << std::endl;
}