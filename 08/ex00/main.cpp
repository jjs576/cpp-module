#include "easyfind.hpp"
#include <vector>
#include <set>
#include <map>
#include <list>

int main() {
	std::cout << "--------set test--------" << std::endl;
	try {
		std::set<int> se;
		std::set<int>::iterator it;

		for (int i = 1; i < 5; i++)
			se.insert(i * 10);

		for (std::set<int>::iterator iter = se.begin(); iter != se.end(); iter++)
			std::cout << *iter << " ";
		std::cout << std::endl;

		it = easyfind(se, 30);
		std::cout << *it << std::endl;

		std::cout << *easyfind(se, 123);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "--------multiset test--------" << std::endl;
	try {
		std::multiset<int> se;
		std::multiset<int>::iterator it;

		for (int i = 1; i < 5; i++)
			se.insert(i * 13);

		for (std::multiset<int>::iterator iter = se.begin(); iter != se.end(); iter++)
			std::cout << *iter << " ";
		std::cout << std::endl;

		it = easyfind(se, 39);
		std::cout << *it << std::endl;

		std::cout << *easyfind(se, 123);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "------------vector test------------" << std::endl;
	try {
		std::vector<int> vec;
		std::vector<int>::iterator it;

		for (int i = 0; i < 10; i++)
			vec.push_back(i + 1);
		for (int i = 0; i < 10; i++)
			std::cout << vec[i] << " ";
		std::cout << std::endl;
		it = easyfind(vec, 4);
		std::cout << *it << std::endl;
		std::cout << *easyfind(vec, 123);

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << "------------list test------------" << std::endl;
	try {
		std::list<int> lst;
		std::list<int>::iterator it;

		for (int i = 0; i < 10; i++)
			lst.push_back(i + 22);
		for (std::list<int>::iterator iter = lst.begin(); iter != lst.end(); iter++)
			std::cout << *iter << " ";
		std::cout << std::endl;

		it = easyfind(lst, 30);
		std::cout << *it << std::endl;

		std::cout << *easyfind(lst, 123);

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}
