#include "Peon.hpp"

Peon::Peon()
{
    this->name = "peon";
    std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& target): Victim(target)
{
    std::cout << "Zog zog. (Copy)" << std::endl;
}

Peon&         Peon::operator=(const Peon& target)
{
    this->name = target.name;
    return *this;
}

void            Peon::getPolymorphed() const
{
    std::cout << this->name << " has been turned into a pink pony!" << std::endl;
}

std::ostream&   operator<<(std::ostream& os, const Peon& target)
{
    os << "I'm " << target.getName() << " and I like otters!" << std::endl;
    return os;
}
