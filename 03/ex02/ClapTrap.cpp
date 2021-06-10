#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Unknown ClapTrap";
	this->hit_points = 0;
	this->max_hit_points = 0;
	this->energy_points = 0;
	this->max_energy_points = 0;
	this->level = 0;
	this->melee_damage = 0;
	this->range_damage = 0;
	this->armor_reduction = 0;
	std::cout << "ClapTrap <" << this->name << "> default constructor called" << std::endl;
}


ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_points = 0;
	this->max_hit_points = 0;
	this->energy_points = 0;
	this->max_energy_points = 0;
	this->level = 0;
	this->melee_damage = 0;
	this->range_damage = 0;
	this->armor_reduction = 0;
	std::cout << "ClapTrap <" << this->name << "> name constructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap& origin)
{
	*this = origin;
	std::cout << "ClapTrap <" << this->name << "> copy constructor called" << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap <" << this->name << "> destructor called" << std::endl;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& origin)
{
	this->name = origin.name;
	this->hit_points = origin.hit_points;
	this->max_hit_points = origin.max_hit_points;
	this->energy_points = origin.energy_points;
	this->max_energy_points = origin.max_energy_points;
	this->level = origin.level;
	this->melee_damage = origin.melee_damage;
	this->range_damage = origin.range_damage;
	this->armor_reduction = origin.armor_reduction;
	std::cout << "ClapTrap <" << this->name << "> assignation operator called" << std::endl;
	return *this;
}

void ClapTrap::rangedAttack(std::string const& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << " at range, causing " << this->range_damage << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << " at melee, causing " << this->melee_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int damage = amount - this->armor_reduction;
	damage = damage > 0 ? damage : 0;

	if (this->hit_points < damage)
		this->hit_points = 0;
	else
		this->hit_points -= damage;

	std::cout << "ClapTrap " << this->name << " taken " << damage << " points of damage!!" << std::endl;
	std::cout << "HP is " << this->hit_points << "!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hit_points += amount;
	if (this->hit_points > this->max_hit_points)
	{
		this->hit_points = this->max_hit_points;
		amount -= (this->hit_points - this->max_hit_points);
	}
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " points of HP!"<< std::endl;
	std::cout << "HP is " << this->hit_points << "!" << std::endl;
}

std::string ClapTrap::getName()
{
	return this->name;
}
