#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"


class Sorcerer
{
private:
	std::string name;
	std::string title;
	Sorcerer();

public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const &origin);
	Sorcerer &operator=(Sorcerer const &origin);
	~Sorcerer();

	std::string getName() const;
	std::string getTitle() const;
	void polymorph(Victim const &target) const;
};

std::ostream &operator<<(std::ostream &out, Sorcerer const &target);

#endif
