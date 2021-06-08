#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

Brain const &Human::getBrain() const {
	return this->brain;
}

Brain const *Human::identify() const {
	return this->brain.identify();
}
