#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << Fixed::bits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));
}

Fixed::Fixed(Fixed const &origin)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = origin.getRawBits();
}

Fixed::~Fixed()
{
	std::cout <<  "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &origin)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = origin.getRawBits();
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFloat() const
{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

int Fixed::toInt() const
{
	return (this->value >> Fixed::bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}
