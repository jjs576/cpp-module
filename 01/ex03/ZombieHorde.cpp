#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int _num)
{
	this->num = _num;
	const std::string name[5] = {"jjoo", "yepark", "kkang", "soohchoi", "hyulee"};

	this->zombie = new Zombie[this->num];
	for (int i = 0; i< this->num; i++)
		zombie[i].setValue(name[std::rand() % 5], "Horde");
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Zombies are dead !" << std::endl;
	delete[] zombie;
}

void ZombieHorde::announce()
{
	for (int i= 0 ; i< this->num; i++)
		zombie[i].announce();
}
