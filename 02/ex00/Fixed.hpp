#ifndef FIXED_H
#define FIXED_H

#include <iostream>


class Fixed {
private:
	int value;
	static const int fractional = 8;

public:
	Fixed();
	Fixed(Fixed const &origin);
	~Fixed();

	Fixed &operator=(Fixed const &origin);

	void setRawBits(int const raw);
	int getRawBits() const;
};

#endif
