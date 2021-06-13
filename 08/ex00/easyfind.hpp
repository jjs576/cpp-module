#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>

class NotFountException: public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return "Not found matching value";
	}
};

template <typename T>
typename T::iterator easyfind(T& container, int n)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), n);
	if (iter == container.end())
		throw NotFountException();
	else
		return iter;
}

#endif
