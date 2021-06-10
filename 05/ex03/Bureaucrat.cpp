#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name) {
	saveGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) : name(bureaucrat.name) {
	saveGrade(bureaucrat.grade);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat) {
	if (this != &bureaucrat) {
		saveGrade(bureaucrat.grade);
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

int Bureaucrat::getGrade() const {
	return this->grade;
}

std::string Bureaucrat::getName() const {
	return this->name;
}

void Bureaucrat::saveGrade(int grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

void Bureaucrat::upGrade() {
	saveGrade(this->grade - 1);
}

void Bureaucrat::downGrade() {
	saveGrade(this->grade + 1);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is Too HIGH!!!!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is Too LOW!!!!!";
}

void Bureaucrat::signForm(Form &form) const {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException &exception) {
		std::cout << "<" << this->getName() << "> cannot sign <"
		<< form.getName() << "> because <" << form.getName() << ">'s " << exception.what() << std::endl;
	}
}

void Bureaucrat::excuteForm(Form const &form) const {
	try {
		form.excute(*this);
		std::cout << "<" << this->name << "> excute success <" << form.getName() << "> form" << std::endl;
	}
	catch (const std::exception& exception) {
		std::cout << "<" << this->name << "> excute failed <" << form.getName() << "> form because" << exception.what() << std::endl;;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	std::cout << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade() << ">." <<  std::endl;
	return out;
}
