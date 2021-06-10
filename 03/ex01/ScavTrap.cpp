#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "Unknown";
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->melee_damage = 20;
	this->range_damage = 15;
	this->armor_reduction = 3;
	std::cout << "ScavTrap <" << this->name << "> default constructor called" << std::endl;
}


ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->melee_damage = 20;
	this->range_damage = 15;
	this->armor_reduction = 3;
	std::cout << "ScavTrap <" << this->name << "> name constructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& origin)
{
	*this = origin;
	std::cout << "ScavTrap <" << this->name << "> copy constructor called" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << this->name << "> destructor called" << std::endl;
}


ScavTrap& ScavTrap::operator=(const ScavTrap& origin)
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
	std::cout << "ScavTrap <" << this->name << "> assignation operator called" << std::endl;
	return *this;
}

void ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at range, causing " << this->range_damage << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "SC4V-TP " << this->name << " attacks " << target << " at melee, causing " << this->melee_damage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int damage = amount - this->armor_reduction;
	damage = damage > 0 ? damage : 0;

	if (this->hit_points < damage)
		this->hit_points = 0;
	else
		this->hit_points -= damage;

	std::cout << "SC4V-TP " << this->name << " taken " << damage << " points of damage!!" << std::endl;
	std::cout << "HP is " << this->hit_points << "!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	this->hit_points += amount;
	if (this->hit_points > this->max_hit_points)
	{
		this->hit_points = this->max_hit_points;
		amount -= (this->hit_points - this->max_hit_points);
	}
	std::cout << "SC4V-TP " << this->name << " repaired " << amount << " points of HP!"<< std::endl;
	std::cout << "HP is " << this->hit_points << "!" << std::endl;
}

std::string ScavTrap::getName()
{
	return this->name;
}

void ScavTrap::challengeNewcomer()
{
	const std::string challenges[5] = {
		"Human Kill",
		"Critical Hit Kill",
		"Combo Kill",
		"Action Skill Kill",
		"Enemy Kill"
	};
	int random_value = std::rand() % 5;
	std::string challenge = challenges[random_value];
	std::cout << "New Challenge <" << challenge << "> !" << std::endl;
}
