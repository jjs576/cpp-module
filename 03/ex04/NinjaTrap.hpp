#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
private:
public:
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap& trap);

	NinjaTrap& operator=(const NinjaTrap& trap);
	void ninjaShoebox(ClapTrap& trap);
	void ninjaShoebox(FragTrap& trap);
	void ninjaShoebox(ScavTrap& trap);
	void ninjaShoebox(NinjaTrap& trap);
};

#endif
