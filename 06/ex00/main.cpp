#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error: Bad Arguments" << std::endl;
	else
	{
		std::string str = argv[1];
		Convert c(str);
		c.setType();
		c.printAll();
	}
	return 0;
}
