#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
	std::string target;

	RobotomyRequestForm();

	public:
	RobotomyRequestForm(std::string const &tar);
	RobotomyRequestForm(RobotomyRequestForm const &ro);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &ro);
	~RobotomyRequestForm();

		void excute(Bureaucrat const &excutor) const;
};

#endif