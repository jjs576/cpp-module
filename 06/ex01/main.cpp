#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void* serialize()
{
	std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* raw = new char[20];
	int num = rand();

	for (int i = 0; i< 8; i++)
		raw[i] = chars[rand() % chars.size()];
	*reinterpret_cast<int*>(raw + 8) = num;
	for (int i = 0; i< 8; i++)
		raw[i + 12] = chars[rand() % chars.size()];
	return reinterpret_cast<void*>(raw);
}

Data* deserialize(void *raw)
{
	Data* data = new Data;

	data->s1 = std::string(reinterpret_cast<char*>(raw) , 8);
	data->n = *reinterpret_cast<int*>(reinterpret_cast<char *>(raw) + 8);
	data->s2 = std::string(reinterpret_cast<char*>(raw) + 12, 8);

	return data;
}

std::ostream& operator<<(std::ostream& os, const Data& data)
{
	os << data.s1 << data.n <<data.s2 << std::endl;
	os << "s1 : " << data.s1 << ", sizeof s1 : " << sizeof(data.s1) << std::endl;
	os << " n : " << data.n  << ", sizeof  n : " << sizeof(data.n)  << std::endl;
	os << "s2 : " << data.s2 << ", sizeof s2 : " << sizeof(data.s2) << std::endl;
	return os;
}

int main()
{
	srand(time(NULL));
	void *raw;
	struct Data* data;

	raw = serialize();
	std::cout << "------------- Serialize --------------" << std::endl;
	std::string s1 = reinterpret_cast<char*>(raw);
	std::cout << "raw s1 : " << s1 << std::endl;
	int* n = reinterpret_cast<int*>(reinterpret_cast<char*>(raw) + 8);
	std::cout << "raw n : " << *n << std::endl;
	std::string s2 = reinterpret_cast<char*>(raw) + 12;
	std::cout << "raw s2 : " << s2 << std::endl;


	data = deserialize(raw);
	std::cout << "------------ Deserialize --------------" << std::endl;
	std::cout << *data << std::endl;

	return 0;
}
