#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>
#include <cstdlib>

class Span
{
	private:
		unsigned int size;
		std::set<int> nums;
		Span();

	public:
		virtual ~Span();
		Span(unsigned int size);
		Span(const Span& s);
		Span& operator=(const Span& s);
		void addNumber(int n);
		void addNumberRange(int begin, unsigned int n);
		void addNumberRandom(unsigned int n);
		void printElem();
		unsigned int shortestSpan();
		unsigned int longestSpan();
	class OutOfRangeException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class AlreadyExistException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class FullContainerException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class FailedSpanException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#endif
