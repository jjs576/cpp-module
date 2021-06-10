#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

}
