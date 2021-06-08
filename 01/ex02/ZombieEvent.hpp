#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <string>
#include <cstdlib>

class ZombieEvent
{
private:
	std::string type;

public:
	ZombieEvent();

	void setZombieType(std::string _type);
	Zombie* newZombie(std::string _name);
	Zombie* randomChump();
};

#endif
