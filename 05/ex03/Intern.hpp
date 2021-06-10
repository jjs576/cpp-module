#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		Intern(Intern const &intern);
		Intern &operator=(Intern const &intern);
		~Intern();

		class NoMatchForm : public std::exception {
			virtual const char *what() const throw();
		};
		Form *makeForm(std::string const &name, std::string const &target);
};

typedef struct	s_former {
	std::string name;
	Form* (*ret)(std::string name);
}				t_former;

#endif