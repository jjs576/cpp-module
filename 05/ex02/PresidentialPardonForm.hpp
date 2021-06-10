#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
	std::string target;

	PresidentialPardonForm();

	public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &form);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &form);
	~PresidentialPardonForm();

	void excute(Bureaucrat const &excutor) const;
};
