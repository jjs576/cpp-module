#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

# include <limits>

class PhoneBook{
private:
	Contact	contacts[8];
	int		amount;

public:
	PhoneBook();
	void	welcome();
	void	run();
	void	add();
	void	search();
	void	exit();
};

#endif
