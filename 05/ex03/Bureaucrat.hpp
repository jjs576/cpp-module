#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
	std::string const name;
	int grade;

	void saveGrade(int grade);
	Bureaucrat();

	public:
	Bureaucrat(std::string const &n, int grade);
	Bureaucrat(Bureaucrat const &bureaucrat);
	Bureaucrat &operator=(Bureaucrat const &bureaucrat);
	~Bureaucrat();

	int getGrade() const;
	std::string getName() const;

	void upGrade();
	void downGrade();
	void signForm(Form &form) const;
	void excuteForm(Form const &form) const;

	class GradeTooHighException: public std::exception {
		public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif