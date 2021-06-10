#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::srand(time(NULL));

	ClapTrap clap1;
	ClapTrap clap2("CL4P-TP");
	ClapTrap clap3(clap1);
	ClapTrap clap4;

	clap4 = clap2;

	clap1.meleeAttack(clap2.getName());
	clap1.rangedAttack(clap2.getName());
	clap2.takeDamage(50);

	clap2.beRepaired(40);
	clap2.takeDamage(20000);

	clap2.beRepaired(50);
	std::cout << "============================" << std::endl;

	FragTrap frag1;
	FragTrap frag2("FR4G-TP");
	FragTrap frag3(frag1);
	FragTrap frag4;

	frag4 = frag2;


	frag1.meleeAttack(frag2.getName());
	frag1.rangedAttack(frag2.getName());
	frag2.takeDamage(50);

	frag2.beRepaired(40);
	frag2.takeDamage(20000);

	frag1.vaulthunter_dot_exe(frag2.getName());
	frag1.vaulthunter_dot_exe(frag2.getName());
	frag1.vaulthunter_dot_exe(frag2.getName());
	frag1.vaulthunter_dot_exe(frag2.getName());
	frag1.vaulthunter_dot_exe(frag2.getName());
	frag1.vaulthunter_dot_exe(frag2.getName());
	frag2.beRepaired(50);

	std::cout << "============================" << std::endl;

	ScavTrap scav1;
	ScavTrap scav2("SC4V-TP");
	ScavTrap scav3(scav1);
	ScavTrap scav4;

	scav4 = scav2;


	scav1.meleeAttack(scav2.getName());
	scav1.rangedAttack(scav2.getName());
	scav2.takeDamage(50);

	scav2.beRepaired(40);
	scav2.takeDamage(20000);

	scav2.challengeNewcomer();
	scav2.challengeNewcomer();
	scav2.challengeNewcomer();
	scav2.challengeNewcomer();
	scav2.challengeNewcomer();
	scav2.beRepaired(50);

	std::cout << "============================" << std::endl;

	NinjaTrap ninja1;
	NinjaTrap ninja2("NINJ4-TP");
	NinjaTrap ninja3(ninja2);
	NinjaTrap ninja4;

	ninja4 = ninja3;

	ninja1.rangedAttack(ninja2.getName());
	ninja1.meleeAttack(ninja2.getName());

	ninja2.takeDamage(50);
	ninja2.beRepaired(30);
	ninja2.beRepaired(100);

	ninja2.takeDamage(999);

	ninja1.ninjaShoebox(clap2);
	ninja1.ninjaShoebox(frag2);
	ninja1.ninjaShoebox(scav2);
	ninja1.ninjaShoebox(ninja2);
	ninja1.beRepaired(30);
	std::cout << "=====================================================" << std::endl;

	SuperTrap super1;
	SuperTrap super2("SUPER-TP");
	SuperTrap super3(super2);
	SuperTrap super4;

	super4 = super3;

	std::cout << "=====================================================" << std::endl;
	super1.rangedAttack(super2.getName());
	super1.meleeAttack(super2.getName());

	super2.takeDamage(50);
	super2.beRepaired(30);
	super2.beRepaired(100);

	super2.takeDamage(999);

	super1.ninjaShoebox(clap2);
	super1.ninjaShoebox(frag2);
	super1.ninjaShoebox(scav2);
	super1.vaulthunter_dot_exe(super2.getName());
	super1.ninjaShoebox(ninja2);

	super1.beRepaired(30);
	std::cout << "=====================================================" << std::endl;
}
