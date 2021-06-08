#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "undead";
}

void ZombieEvent::setZombieType(std::string _type)
{
	this->type = _type;
}

Zombie* ZombieEvent::newZombie(std::string _name)
{
	return new Zombie(_name, this->type);
}

Zombie* ZombieEvent::randomChump()
{
	const std::string name[5] = {"jjoo", "yepark", "kkang", "soohchoi", "hyulee"};

	return new Zombie(name[std::rand() % 5], this->type);
}
