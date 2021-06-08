#include <iostream>
#include <fstream>
#include <string>

int error(std::string const &str)
{
	std::cout << "Error : " << str << std::endl;
	return (-1);
}

void replaceLine(std::string &line, std::string const &s1, std::string const &s2)
{
	int index;

	std::string::size_type offset = 0;

	if (line[0] == 0)
		return ;
	while ((index = line.find(s1, offset)) != -1)
	{
		line.replace(line.begin() + index, line.begin() + index + s1.length(), s2);
		offset = index + s2.length();
	}
}

int replace(std::string const &filename, std::string const &s1, std::string const &s2)
{
	std::ifstream fin(filename);
	std::string input;
	int index;

	if (fin.fail())
		return error("failed to open input file");

	std::ofstream fout(filename + ".replace");
	if (fout.fail())
		return error("failed to open output file");
	while (std::getline(fin, input))
	{
		replaceLine(input, s1, s2);
		fout << input;
		if (!fin.eof())
			fout << std::endl;
		input.clear();
	}
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return error("bad arguments");
	return replace(argv[1], argv[2], argv[3]);
}
