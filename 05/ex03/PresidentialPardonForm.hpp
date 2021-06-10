#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
	std::string target;

	PresidentialPardonForm();

	public:
	PresidentialPardonForm(std::string const &tar);
	PresidentialPardonForm(PresidentialPardonForm const &ro);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &ro);
	~PresidentialPardonForm();

	void excute(Bureaucrat const &excutor) const;
};