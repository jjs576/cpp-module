#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &intern) {
	*this = intern;
}

Intern	&Intern::operator=(Intern const &intern) {
	(void)intern;
	return *this;
}

Intern::~Intern() {}

Form *ret_shrub(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form *ret_roboto(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form *ret_pardon(std::string target) {
	return (new PresidentialPardonForm(target));
}

const char	*Intern::NoMatchForm::what() const throw() {
	return "Input name is not match any form";
}

Form	*Intern::makeForm(std::string const &name, std::string const &target) {
	t_former forma[3] = {
		{"shrubbery creation", ret_shrub},
		{"robotomy request", ret_roboto},
		{"presidential pardon", ret_pardon}
	};

	for (int i = 0; i < 3; i ++) {
		if (name == forma[i].name) {
			std::cout << "Intern creates " << name << std::endl;
			return forma[i].ret(target);
		}
	}
	throw Intern::NoMatchForm();
	return NULL;
}