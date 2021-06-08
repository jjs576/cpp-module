#include "Contact.hpp"

Contact::Contact()
{
	for (size_t i = 0; i < 11; i++)
		this->field_value[i] = std::string();
}

void	Contact::setIndex(size_t _index)
{
	this->index = _index;
}

void	Contact::setValue()
{
	std::cout << "** Contact #" << this->index << std::endl;
	for (size_t i = 0; i < 11; i++) {
		std::string	inputValue;
		std::cout << "** Input your " << this->field_name[i] << std::endl;
		std::cout << "-> ";
		std::getline(std::cin, inputValue);
		this->field_value[i] = inputValue;
	}
	std::cout << "** Completed !" << std::endl;
}

void	Contact::display()
{
	std::cout << "** Contact #" << this->index << std::endl;
	for (size_t i = 0; i < 11; i++) {
		std::cout << Contact::field_name[i] << " : ";
		std::cout << this->field_value[i] << std::endl;
	}
}

void	Contact::displayHeader()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = 0; i <= 2; i++) {
		std::cout << "|";
		if (this->field_value[i].length() > 10)
			std::cout << this->field_value[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->field_value[i];
	}
	std::cout << "|" << std::endl;
}

