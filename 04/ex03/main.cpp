#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* ice;
	ice = src->createMateria("ice");
	me->equip(ice);
	AMateria* cure;
	cure = src->createMateria("cure");
	me->equip(cure);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(0, *bob);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	me->use(1, *bob);
	std::cout << "ice XP : " << ice->getXP() << std::endl;
	std::cout << "cure XP : " << cure->getXP() << std::endl;
	delete bob;
	delete me;
	delete src;

	return 0;
}
