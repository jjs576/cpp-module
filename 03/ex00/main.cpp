#include "FragTrap.hpp"

int main()
{
	std::srand(time(NULL));

	FragTrap trap1;
	FragTrap trap2("CL4P-TP");
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

}
