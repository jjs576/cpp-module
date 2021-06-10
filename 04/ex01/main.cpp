#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "FatMan.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* rs = new RadScorpion();
	Enemy* sm = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* fm = new FatMan();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(rs);
	std::cout << *me;
	me->equip(fm);
	std::cout << *me;
	me->recoverAP();
	me->attack(rs);
	std::cout << *me;
	me->recoverAP();

	me->attack(sm);
	std::cout << *me;
	me->attack(sm);
	std::cout << *me;

	return 0;
}
