#include <iostream>
#include <string>

int		main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		int	i = 1;
		for (int i = 1; argv[i]; i++) {
			std::string s = argv[i];
			for (std::string::size_type j = 0; j < s.length(); j++)
				std::cout << char(toupper(s[j]));
		}
		std::cout << std::endl;
	}
	return (0);
}
