#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
	std::string target;

	RobotomyRequestForm();

	public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &form);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &form);
	~RobotomyRequestForm();

		void excute(Bureaucrat const &excutor) const;
};

#endif
