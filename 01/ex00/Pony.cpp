#include "Pony.hpp"

Pony::Pony(std::string _name)
{
	this->name = _name;
	std::cout << "Pony " << this->name << " is born !" << std::endl;
}
Pony::~Pony()
{
	std::cout << "Pony " << this->name << " is dead !" << std::endl;
}
void	Pony::run()
{
	std::cout << "Pony " << this->name << " is running !" << std::endl;
}
