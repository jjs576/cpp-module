#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::srand(time(NULL));

	FragTrap trap1;
	FragTrap trap2("FR4G-TP");
	FragTrap trap3(trap1);
	FragTrap trap4;

	trap4 = trap2;


	std::cout << "============================" << std::endl;
	trap1.meleeAttack(trap2.getName());
	trap1.rangedAttack(trap2.getName());
	trap2.takeDamage(50);

	trap2.beRepaired(40);
	trap2.takeDamage(20000);

	trap1.vaulthunter_dot_exe(trap2.getName());
	trap1.vaulthunter_dot_exe(trap2.getName());
	trap1.vaulthunter_dot_exe(trap2.getName());
	trap1.vaulthunter_dot_exe(trap2.getName());
	trap1.vaulthunter_dot_exe(trap2.getName());
	trap1.vaulthunter_dot_exe(trap2.getName());
	trap2.beRepaired(50);

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
