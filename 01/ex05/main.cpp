#include "Human.hpp"
#include <iostream>

int main()
{
	Human guy;

	std::cout << guy.identify() << std::endl;
	std::cout << guy.getBrain().identify() << std::endl;

	return (0);
}
