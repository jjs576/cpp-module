#include <iostream>
#include "Form.hpp"

Form::Form(std::string const &name, int execGrade, int signGrade): name(name), sign(false), execGrade(execGrade), signGrade(signGrade) {
	checkGrade(execGrade, signGrade);
}

Form::Form(Form const &form) : name(form.name), sign(form.sign), execGrade(form.execGrade), signGrade(form.signGrade) {
	checkGrade(form.execGrade, form.signGrade);
}

Form	&Form::operator=(Form const &form) {
	if (this != &form) {
		this->sign = form.sign;
		checkGrade(form.execGrade, form.signGrade);
	}
	return *this;
}

Form::~Form() {}

void	Form::checkGrade(int execGrade, int signGrade) {
	if (execGrade < 1 || signGrade < 1)
		throw Form::GradeTooHighException();
	else if (execGrade > 150 || signGrade > 150)
		throw Form::GradeTooLowException();
}

void	Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() < this->signGrade)
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}

std::string	const Form::getName() const { 
	return this->name; 
}

bool		Form::getSign() const { 
	return this->sign; 
}

int			Form::getExecGrade() const { 
	return this->execGrade; 
}

int			Form::getSignGrade() const { 
	return this->signGrade; 
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is Too HIGH!!!!";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is Too LOW!!!!!";
}

const char *Form::FormNotSigned::what() const throw() {
	return "Form error : Form need to be signed";
}

std::ostream	&operator<<(std::ostream &out, Form const &form) {
	if (form.getSign())
		out << "<" << form.getName() << ">, is signed. ";
	else
		out << "<" << form.getName() << ">, is unsigned. ";
	out << "Grade | For execute : " << form.getExecGrade() << " | For sign : " 
	<< form.getSignGrade() << " |" << std::endl;

	return out;
}

void 		Form::checkExcute(Bureaucrat const &bureaucrat) const {
	if (!this->sign)
		throw Form::FormNotSigned();
	if (bureaucrat.getGrade() > this->execGrade)
		throw Form::GradeTooLowException();
}





