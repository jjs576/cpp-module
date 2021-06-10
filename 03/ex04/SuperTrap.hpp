#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
private:
public:
	SuperTrap();
	~SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap& trap);

	SuperTrap& operator=(const SuperTrap& trap);
	void rangedAttack(std::string const& target);
	void meleeAttack(std::string const& target);
};

#endif
