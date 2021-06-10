#include "Victim.hpp"

Victim::Victim()
{
	this->name = "victim";
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& target)
{
	*this = target;
	std::cout << "Some random victim called " << this->name << " just appeared! (Copy)" << std::endl;
}

Victim& Victim::operator=(const Victim& target)
{
	this->name = target.name;
	return *this;
}

std::string Victim::getName() const
{
	return this->name;
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Victim& target)
{
	os << "I'm " << target.getName() << " and I like otters!" << std::endl;
	return os;
}
