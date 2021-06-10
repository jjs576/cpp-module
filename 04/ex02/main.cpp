#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* jjoo = new TacticalMarine;
    ISpaceMarine* park = new AssaultTerminator;
    ISpaceMarine* pizza = new TacticalMarine;
    ISpaceMarine* cake = new AssaultTerminator;

    ISquad* vlc = new Squad;
    std::cout << "i : " << vlc->push(bob) << std::endl;
    std::cout << "i : " << vlc->push(jim) << std::endl;
    std::cout << "i : " << vlc->push(jjoo) << std::endl;
    std::cout << "i : " << vlc->push(park) << std::endl;
    std::cout << "i : " << vlc->push(bob) << std::endl;
    std::cout << "i : " << vlc->push(jim) << std::endl;
    std::cout << "i : " << vlc->push(pizza) << std::endl;
    std::cout << "i : " << vlc->push(cake) << std::endl;
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;

    return 0;
}
