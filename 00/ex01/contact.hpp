#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact{
private:
	std::string	field_value[11];
	size_t		index;
	static std::string	field_name[11];

public:
	Contact();

	void	setIndex(size_t _index);
	void	setValue();
	void	display();
	void	displayHeader();
};

#endif
