#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->amount = 0;
}

void	PhoneBook::welcome()
{
	std::cout << "** PHONE BOOK" << std::endl;
	std::cout << "** Available Commands" << std::endl;
	std::cout << "** ADD | SEARCH | EXIT " << std::endl;
}

void	PhoneBook::run()
{
	while (true) {
		this->welcome();
		std::string	cmd;
		std::cout << "** Input Command" << std::endl;
		std::cout << "-> ";
		std::getline(std::cin, cmd);
		if (std::cin.eof()) {
			std::cout << "** End of file !" << std::endl;
			break ;
		}
		else if (cmd == "ADD") {
			this->add();
		}
		else if (cmd == "SEARCH") {
			this->search();
		}
		else if (cmd == "EXIT") {
			this->exit();
			break ;
		}
		else {
			std::cout << "Invalid Input !" << std::endl;
		}
	}
}


void	PhoneBook::add()
{
	if (this->amount == 8)
		std::cout << "PhoneBook is Full !!" << std::endl;
	else {
		this->contacts[this->amount].setIndex(this->amount);
		this->contacts[this->amount].setValue();
		this->amount++;
	}
}

void	PhoneBook::search()
{
	int index;

	if (this->amount == 0)
		std::cout << "PhoneBook is Empty !!" << std::endl;
	else {
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		for (int i = 0; i < this->amount; i++)
			this->contacts[i].displayHeader();
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "** Input Index" << std::endl;
		std::cout << "-> ";
		std::cin >> index;
		if (index >= 0 && index < this->amount)
			this->contacts[index].display();
		else
			std::cout << "** Wrong Number !" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void	PhoneBook::exit()
{
	std::cout << "** BYE !" << std::endl;
}
