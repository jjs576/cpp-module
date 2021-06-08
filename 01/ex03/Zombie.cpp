#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string _name, std::string _type)
{
	this->name = _name;
	this->type = _type;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead ! " << std::endl;
}

void	Zombie::setValue(std::string _name, std::string _type)
{
	this->name = _name;
	this->type = _type;
}

void	Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type;
	std::cout << ")> Braiiiiiiinnnssss..." << std::endl;
}
