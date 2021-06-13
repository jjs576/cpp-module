#include "iter.hpp"

template <typename T>
void printIter(T& elem)
{
	std::cout << elem << std::endl;
}


int main()
{
	int nums[] = {1,2,3,4,5};
	std::string s[] = {"jjoo", "yepark", "kkang", "llim", "dhyeon", "hyulee"};
	iter(nums, 5, printIter);
	iter(s, 5, printIter);
	return 0;
}
