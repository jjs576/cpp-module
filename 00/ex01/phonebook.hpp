#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# include <limits>

class Phonebook{
private:
	Contact	contacts[8];
	int		amount;

public:
	Phonebook();
	void	welcome();
	void	run();
	void	add();
	void	search();
	void	exit();
};

#endif
