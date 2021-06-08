#include "HumanB.hpp"

HumanB::HumanB(std::string _name) :
name(_name)
{

}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
