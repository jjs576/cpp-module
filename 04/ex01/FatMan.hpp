#ifndef FATMAN_HPP
#define FATMAN_HPP

#include "AWeapon.hpp"

class FatMan: public AWeapon
{
public:
	FatMan();
	FatMan(FatMan const &other);
	virtual ~FatMan();

	FatMan &operator=(FatMan const &other);

	void attack(void) const;
};

#endif
