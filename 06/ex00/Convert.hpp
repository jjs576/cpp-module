#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>


class Convert
{
private:
	Convert();

	std::string raw_input;
	char value_char;
	int value_int;
	float value_float;
	double value_double;

public:
	virtual ~Convert();
	Convert(std::string const &value);
	Convert(Convert const &other);

	Convert &operator=(Convert const &other);

	void setType();
	void printChar();
	void printInt();
	void printFloat();
	void printDouble();
	void printAll();
};

#endif
