#include "span.hpp"

Span::Span()
{
}

Span::~Span()
{
	this->nums.clear();
}

Span::Span(unsigned int size): size(size)
{
	if (static_cast<int>(size) < 0)
		throw Span::OutOfRangeException();
}

Span::Span(const Span& s)
{
	*this = s;
}

Span& Span::operator=(const Span& s)
{
	if (this != &s)
	{
		this->nums.clear();
		this->size = s.size;
		this->nums = s.nums;
	}
	return *this;
};

void Span::addNumber(int n)
{
	if (this->size == this->nums.size())
		throw Span::FullContainerException();
	else if (this->nums.find(n) != this->nums.end())
		throw Span::AlreadyExistException();
	else
		this->nums.insert(n);
}

void Span::addNumberRange(int begin, unsigned int n)
{
	if (this->size < this->nums.size() + n)
		throw Span::FullContainerException();
	for (unsigned int i = 0; i < n; i++)
	{
		if (this->nums.find(begin + i) != this->nums.end())
			throw Span::AlreadyExistException();
		else
			this->nums.insert(begin + i);
	}
}

void Span::addNumberRandom(unsigned int n)
{
	if (this->size < this->nums.size() + n)
		throw Span::FullContainerException();
	std::set<int> random_nums;
	std::set<int>::iterator iter;
	while (random_nums.size() < n)
		random_nums.insert(rand());
	iter = random_nums.begin();
	for (; iter != random_nums.end(); ++iter)
	{
		if (this->nums.find(*iter) != this->nums.end())
			throw Span::AlreadyExistException();
		else
			this->nums.insert(*iter);
	}
}

void Span::printElem()
{
	std::set<int>::iterator iter;
	for (iter = this->nums.begin(); iter != this->nums.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << std::endl;
}

unsigned int Span::shortestSpan()
{
	if (this->nums.size() == 1 || this->nums.empty())
		throw Span::FailedSpanException();
	unsigned int shortest;
	unsigned int diff;
	std::set<int>::iterator iter1 = this->nums.begin();
	std::set<int>::iterator iter2 = this->nums.begin();
	iter2++;
	for (; iter2 != nums.end(); ++iter2, ++iter1)
	{
		diff = abs(*iter2 - *iter1);
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

unsigned int Span::longestSpan()
{
	if (this->nums.size() == 1 || this->nums.empty())
		throw Span::FailedSpanException();
	unsigned int longest;
	longest = *this->nums.rbegin() - *this->nums.begin();
	return longest;
}

const char* Span::OutOfRangeException::what() const throw()
{
	return "Error : Out of input range!";
}

const char* Span::AlreadyExistException::what() const throw()
{
	return "Error : Number is already exist!";
}

const char* Span::FullContainerException::what() const throw()
{
	return "Error : Container is Full!";
}

const char* Span::FailedSpanException::what() const throw()
{
	return "Error : Span was Failed!";
}
