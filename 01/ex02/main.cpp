#include "ZombieEvent.hpp"

int main()
{
	Zombie *zombie1;
	Zombie *zombie2;
	Zombie *zombie3;
	ZombieEvent event;

	srand(time(NULL));

	zombie1 = event.randomChump();
	zombie1->announce();
	delete zombie1;

	event.setZombieType("dead");
	zombie2 = event.newZombie("jjoooooo");
	zombie2->announce();
	delete zombie2;

	zombie3 = event.randomChump();
	zombie3->announce();
	delete zombie3;

	return (0);
}
