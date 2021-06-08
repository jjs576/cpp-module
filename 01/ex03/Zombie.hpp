#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string type;
	std::string name;
public:
	Zombie();
	Zombie(std::string _name, std::string _type);
	~Zombie();
	void setValue(std::string _name, std::string _type);
	void announce();
};

#endif
