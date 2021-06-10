#include "FatMan.hpp"

FatMan::FatMan():
	AWeapon("Fat Man", 20, 100)
{

}

FatMan::FatMan(FatMan const &other):
	AWeapon(other)
{

}

FatMan::~FatMan()
{

}

FatMan &FatMan::operator=(FatMan const &other)
{
	this->name = other.name;
	this->apCost = other.apCost;
	this->damage = other.damage;
	return (*this);
}

void FatMan::attack(void) const
{
	std::cout << "* Boooooooooom *" << std::endl;
}
