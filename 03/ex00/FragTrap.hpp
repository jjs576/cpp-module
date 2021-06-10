#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>

class FragTrap
{
private:
	std::string name;
	unsigned int hit_points;
	unsigned int max_hit_points;
	unsigned int energy_points;
	unsigned int max_energy_points;
	unsigned int level;
	unsigned int melee_damage;
	unsigned int range_damage;
	unsigned int armor_reduction;

public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& origin);

	FragTrap& operator=(const FragTrap& origin);
	void rangedAttack(std::string const& target);
	void meleeAttack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const& target);
	std::string getName();
};

#endif
