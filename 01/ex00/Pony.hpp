#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony{
private:
	std::string	name;
public:
	Pony(std::string _name);
	~Pony();

	void	run();
};


#endif
