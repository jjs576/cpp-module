#include "Pony.hpp"

void ponyOnTheStack()
{
	Pony	p("stack");

	p.run();
}

void ponyOnTheHeap()
{
	Pony *p = new Pony("heap");

	p->run();
	delete p;
}

int main()
{
	std::cout << "ponyOnTheStack" << std::endl;
	ponyOnTheStack();

	std::cout << "ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();

	std::cout << "Done !" << std::endl;
	return (0);
}
