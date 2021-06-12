#include <iostream>
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
	int num = rand() % 3;
	switch(num)
	{
	case 0:
		return new A;
	case 1:
		return new B;
	case 2:
		return new C;
	}
	return new Base;
}

void identify_from_pointer(Base* b)
{
	if (dynamic_cast<A*>(b))
		std::cout << "Real type of this pointer is A" << std::endl;
	else if (dynamic_cast<B*>(b))
		std::cout << "Real type of this pointer is B" << std::endl;
	else if (dynamic_cast<C*>(b))
		std::cout << "Real type of this pointer is C" << std::endl;
	else
		std::cout << "Real type of this pointer is Base" << std::endl;
}

void identify_from_reference(Base &b)
{
	if (dynamic_cast<A*>(&b))
		std::cout << "Real type of this reference is A" << std::endl;
	else if (dynamic_cast<B*>(&b))
		std::cout << "Real type of this reference is B" << std::endl;
	else if (dynamic_cast<C*>(&b))
		std::cout << "Real type of this reference is C" << std::endl;
	else
		std::cout << "Real type of this reference is Base" << std::endl;
}

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		Base* random_base = generate();
		identify_from_pointer(random_base);
		identify_from_reference(*random_base);
		delete random_base;
	}
	return (0);
}
