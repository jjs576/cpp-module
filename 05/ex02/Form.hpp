#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
	std::string const name;
	bool sign;
	int const execGrade;
	int const signGrade;

	void	checkGrade(int execGrade, int signGrade);
	Form();

	public:
	Form(std::string const &name, int execGrade, int signGrade);
	Form(Form const &form);
	Form &operator=(Form const &form);
	virtual ~Form();

	std::string	const getName() const;
	bool		getSign() const;
	int			getExecGrade() const;
	int			getSignGrade() const;
	void		beSigned(Bureaucrat const &bureaucrat);

	void 		checkExcute(Bureaucrat const &bureaucrat) const;
	virtual void excute(Bureaucrat const &bureaucrat) const = 0;


	class GradeTooHighException : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
		virtual const char *what() const throw();
	};

	class FormNotSigned: public std::exception {
		public:
		virtual const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &out, Form const &form);

#endif
