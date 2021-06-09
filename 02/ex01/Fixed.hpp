#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
private:
	int value;
	static const int bits = 8;

public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &origin);
	~Fixed();

	Fixed &operator=(Fixed const &origin);

	void setRawBits(int const raw);
	int getRawBits() const;

	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
