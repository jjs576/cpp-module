#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
	protected:
		std::string name;

	public:
		Victim();
		virtual ~Victim();
		Victim(std::string name);
		Victim(const Victim& target);

		Victim& operator=(const Victim& target);
		std::string getName() const;
		virtual void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& os, const Victim& target);

#endif
