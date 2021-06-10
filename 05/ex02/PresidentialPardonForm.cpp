#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("presidential pardon", 5, 25), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &sh) : Form(sh.getName(), 5, 25), target(sh.target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &form) {
	if (this != &form)
		this->target = form.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::excute(Bureaucrat const &excutor) const {
	this->Form::checkExcute(excutor);
	std::cout << "<" << this->target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}
