#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form {
	private:
	std::string target;
	ShrubberyCreationForm();

	public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &form);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &form);
	~ShrubberyCreationForm();

	class FileOpenFailed: public std::exception {
		public:
		virtual const char *what() const throw();
	};
	void excute(Bureaucrat const &excutor) const;
};
#endif
