#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <cstdlib>

class ZombieHorde {
private:
	int num;
	Zombie* zombie;

public:
	ZombieHorde(int num);
	~ZombieHorde();
	void	announce();
};

#endif
