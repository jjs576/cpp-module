#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->name = "Unknown";
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->melee_damage = 30;
	this->range_damage = 20;
	this->armor_reduction = 5;
	std::cout << "FragTrap <" << this->name << "> default constructor called" << std::endl;
}


FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->melee_damage = 30;
	this->range_damage = 20;
	this->armor_reduction = 5;
	std::cout << "FragTrap <" << this->name << "> name constructor called" << std::endl;
}


FragTrap::FragTrap(const FragTrap& origin)
{
	*this = origin;
	std::cout << "FragTrap <" << this->name << "> copy constructor called" << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap <" << this->name << "> destructor called" << std::endl;
}


FragTrap& FragTrap::operator=(const FragTrap& origin)
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
	std::cout << "FragTrap <" << this->name << "> assignation operator called" << std::endl;
	return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const& target)
{
	const std::string skills[5] = {
		"Torgue Fiesta",
		"Pirate Ship Mode",
		"Clap-in-the-Box",
		"Gun Wizard",
		"One-Shot Wonder"
	};
	int random_value = std::rand() % 5;
	std::string skill = skills[random_value];
	if (this->energy_points < 25)
		std::cout << "FR4G-TP " << this->name << " not enough energy!" << std::endl;
	else
	{
		this->energy_points -= 25;
		int damage = (random_value + 1) * 15;
		std::cout << "FR4G-TP " << this->name << " attacks " << target;
		std::cout << " at " << skill << ", causing " << damage << " points of damage!" << std::endl;
	}
}
