#include "Convert.hpp"

Convert::~Convert()
{

}

Convert::Convert()
{

}

Convert::Convert(const std::string &input)
:raw_input(input)
{

}

Convert::Convert(const Convert &other)
{
	*this = other;
}

Convert& Convert::operator=(const Convert& other)
{
	this->raw_input = other.raw_input;
	this->value_char = other.value_char;
	this->value_int = other.value_int;
	this->value_float = other.value_float;
	this->value_double = other.value_double;
	return *this;
}

void Convert::setType()
{
	if (this->raw_input.size() == 1 && !isnumber(this->raw_input.front()))
	{
		this->value_double = static_cast<double>(this->raw_input.front());
		return ;
	}
	this->value_double = atof(this->raw_input.c_str());
}

void Convert::printChar()
{
	this->value_char = static_cast<char>(this->value_double);
	std::cout << "char : ";
	if (isnan(this->value_double) || isinf(this->value_double)
	|| this->value_double > std::numeric_limits<char>::max()
	|| this->value_double < std::numeric_limits<char>::min())
		std::cout << "impossible" << std::endl;
	else if (!isprint(this->value_char))
		std::cout << "Not printable" << std::endl;
	else
		std::cout << "'" << this->value_char << "'" << std::endl;
}

void Convert::printInt()
{
	this->value_int = static_cast<int>(this->value_double);
	std::cout << "int : ";
	if (isnan(this->value_double) || isinf(this->value_double)
	|| this->value_double > std::numeric_limits<int>::max()
	|| this->value_double < std::numeric_limits<int>::min())
		std::cout << "impassible" << std::endl;
	else
		std::cout << this->value_int << std::endl;
}

void Convert::printFloat()
{
	this->value_float = static_cast<float>(this->value_double);
	std::cout << "float : ";
	if (this->value_float == static_cast<int>(this->value_float))
		std::cout << this->value_float << ".0f" << std::endl;
	else
		std::cout << this->value_float << "f" << std::endl;
}

void Convert::printDouble()
{
	std::cout << "double : ";
	if (this->value_float == static_cast<int>(this->value_float))
		std::cout << this->value_float << ".0" << std::endl;
	else
		std::cout << this->value_float << std::endl;
}

void Convert::printAll()
{
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}
