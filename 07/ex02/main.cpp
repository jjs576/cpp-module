#include "Array.hpp"

int main()
{
    std::cout << "---------------size : 0-----------------" << std::endl;
    Array<int> test0;
    try
    {
        std::cout << test0[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "---------------size : 10----------------" << std::endl;
    Array<int> test(10);
    try
    {
        std::cout << test.size() << std::endl;
        for (unsigned int i = 0; i < test.size(); i++)
        {
            test[i] = i + 1;
            std::cout << test[i] << " ";
        }
        std::cout << std::endl;
        Array<int> test2 = test;
        for (unsigned int i = 0; i < test2.size(); i++)
        {
            test2[i] = test[i] * 2;
            std::cout << test2[i] << " ";
        }
        std::cout << std::endl;
        for (unsigned int i = 0; i < test.size(); i++)
        {
            std::cout << "index: " << i << " test = " << test[i] << " test2 = " << test2[i] << std::endl;
        }
        std::cout << test[-1] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "---------------size : 3-----------------" << std::endl;
    const Array<int> test3(3);
    try
    {
        std::cout << test3.size() << std::endl;
        for (unsigned int i = 0; i < test3.size(); i++)
        {
            test3[i] = i + 1;
            std::cout << test3[i] << " ";
        }
        std::cout << std::endl;
        Array<int> test4(test3);
        test4[1] = 100;
        for (unsigned int i = 0; i < test4.size(); i++)
        {
            std::cout << "index: " << i << " test3 = " << test3[i] << " test4 = " << test4[i] << std::endl;
        }
        std::cout << test3[42] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
