#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("robotomy request", 45, 72), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &form) : Form(form.getName(), 45, 72), target(form.target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &form) {
	if (this != &form)
		this->target = form.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::excute(Bureaucrat const &excutor) const
{
	this->Form::checkExcute(excutor);
	srand(time(NULL));
	int random = rand() % 2;
	if (random)
		std::cout << "<" << this->target << "> has been robotomized successfully" << std::endl;
	else
		std::cout << "<" << this->target << "> failed to robotomized" << std::endl;
}
