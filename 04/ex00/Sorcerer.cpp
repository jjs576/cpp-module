#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &origin)
{
	*this = origin;
	std::cout << this->name << ", " << this->title << ", is born! (copy)" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &origin)
{
	this->name = origin.name;
	this->title = origin.title;
	return *this;
}

std::string Sorcerer::getName() const
{
	return this->name;
}

std::string Sorcerer::getTitle() const
{
	return this->title;
}

void Sorcerer::polymorph(Victim const &target) const {
	target.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &target)
{
	out << "I am " << target.getName() << ", " << target.getTitle() << ", and i like ponies!" << std::endl;
	return out;
}
