#include "mutantstack.hpp"

int main() {
	std::cout << "=================Origin test=================" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "=================test 1=================" << std::endl;
	MutantStack<int> tstack;

	tstack.push(1);
	tstack.push(3);
	tstack.push(6);
	tstack.push(199);
	tstack.push(42);
	tstack.push(100);
	tstack.push(0);

	for (MutantStack<int>::iterator it = tstack.begin(); it != tstack.end(); it++)
		std::cout << *it <<  " ";
	std::cout << std::endl;

	for (MutantStack<int>::reverse_iterator rit = tstack.rbegin(); rit != tstack.rend(); rit++)
		std::cout << *rit <<  " ";

	std::cout << std::endl;

	std::cout << "=================test 2=================" << std::endl;

	MutantStack<int, std::list<int> > l_stack;

	l_stack.push(10);
	l_stack.push(11);
	l_stack.push(13);
	l_stack.push(15);
	l_stack.push(17);
	l_stack.push(19);

	for (MutantStack<int, std::list<int> >::iterator it = l_stack.begin(); it != l_stack.end(); it++)
		std::cout << *it <<  " ";
	std::cout << std::endl;
	l_stack.pop();
	for (MutantStack<int, std::list<int> >::iterator it = l_stack.begin(); it != l_stack.end(); it++)
		std::cout << *it <<  " ";
	std::cout << std::endl;

	for (MutantStack<int, std::list<int> >::reverse_iterator rit = l_stack.rbegin(); rit != l_stack.rend(); rit++)
		std::cout << *rit <<  " ";
	std::cout << std::endl;

	return 0;
}
