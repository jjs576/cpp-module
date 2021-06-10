#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& origin);

	FragTrap& operator=(const FragTrap& origin);
	void vaulthunter_dot_exe(std::string const& target);

};

#endif
