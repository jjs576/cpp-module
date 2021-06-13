#include "span.hpp"

int main()
{
	srand(time(NULL));
	std::cout << "------------Basic Test---------------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "------------Negative N Test---------------" << std::endl;
	try
	{
		Span sp = Span(-1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------Duplication Test---------------" << std::endl;
	try
	{
		Span sp = Span(10);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(4);
		sp.addNumber(3);
		sp.addNumber(6);
		sp.addNumber(5);
		sp.addNumber(2);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------Full Test---------------" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(4);
		sp.addNumber(3);
		sp.addNumber(6);
		sp.addNumber(5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------Span Empty Test---------------" << std::endl;
	try
	{
		Span sp = Span(5);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------Span One elem Test---------------" << std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------Many Test---------------" << std::endl;
	try
	{
		Span sp = Span(10000);
		sp.addNumberRange(1, 10000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------Many random Test---------------" << std::endl;
	try
	{
		Span sp = Span(10000);
		sp.addNumberRandom(10000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
