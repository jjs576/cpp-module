#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim
{
	public:
		Peon();
		virtual ~Peon();
		Peon(std::string name);
		Peon(const Peon& target);

		Peon& operator=(const Peon& target);
		void getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& os, const Peon& target);

#endif
