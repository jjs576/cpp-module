#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	this->name = "Unknown NinjaTrap";
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_damage = 60;
	this->range_damage = 5;
	this->armor_reduction = 0;
	std::cout << "NinjaTrap <" << this->name << "> default constructor called" << std::endl;
}


NinjaTrap::NinjaTrap(std::string name)
{
	this->name = name;
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_damage = 60;
	this->range_damage = 5;
	this->armor_reduction = 0;
	std::cout << "NinjaTrap <" << this->name << "> name constructor called" << std::endl;
}


NinjaTrap::NinjaTrap(const NinjaTrap& origin)
{
	*this = origin;
	std::cout << "NinjaTrap <" << this->name << "> copy constructor called" << std::endl;
}


NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap <" << this->name << "> destructor called" << std::endl;
}


NinjaTrap& NinjaTrap::operator=(const NinjaTrap& origin)
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
	std::cout << "NinjaTrap <" << this->name << "> assignation operator called" << std::endl;
	return *this;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout << "NinjaTrap " << this->name << " destroy ClapTrap " << clap.getName() << "!" << std::endl;
	clap.takeDamage(10000);
}

void	NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << "NinjaTrap " << this->name << " destroy FragTrap " << frag.getName() << "!" << std::endl;
	frag.takeDamage(10000);
}

void	NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	std::cout << "NinjaTrap " << this->name << " destroy ScavTrap " << scav.getName() << "!" << std::endl;
	scav.takeDamage(10000);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	std::cout << "NinjaTrap " << this->name << " destroy NinjaTrap " << ninja.getName() << "!" << std::endl;
	ninja.takeDamage(10000);
}
