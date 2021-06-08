#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human{
private:
	Brain const brain;

public:
	Human();
	~Human();
	Brain const &getBrain() const;
	Brain const *identify() const;
};

#endif
