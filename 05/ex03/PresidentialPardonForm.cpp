#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &tar) : Form("presidential pardon", 5, 25), target(tar)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &sh) : Form(sh.getName(), 5, 25), target(sh.target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &sh) {
	if (this != &sh)
		this->target = sh.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::excute(Bureaucrat const &excutor) const {
	this->Form::checkExcute(excutor);
	std::cout << "<" << this->target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}