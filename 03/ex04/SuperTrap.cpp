#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	this->name = "Unknown SuperTrap";
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_damage = 60;
	this->range_damage = 20;
	this->armor_reduction = 5;
	std::cout << "SuperTrap <" << this->name << "> assignation operator called" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_damage = 60;
	this->range_damage = 20;
	this->armor_reduction = 5;
	std::cout << "SuperTrap <" << this->name << "> assignation operator called" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap <" << this->name << "> destructor called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& trap)
{
	*this = trap;
	std::cout << "SuperTrap <" << this->name << "> copy constructor called" << std::endl;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& trap)
{
	this->name = trap.name;
	this->hit_points = trap.hit_points;
	this->max_hit_points = trap.max_hit_points;
	this->energy_points = trap.energy_points;
	this->max_energy_points = trap.max_energy_points;
	this->level = trap.level;
	this->melee_damage = trap.melee_damage;
	this->range_damage = trap.range_damage;
	this->armor_reduction = trap.armor_reduction;
	std::cout << "SuperTrap <" << this->name << "> assignation operator called" << std::endl;
	return (*this);
}

void SuperTrap::rangedAttack(std::string const& target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const& target)
{
	NinjaTrap::meleeAttack(target);
}
