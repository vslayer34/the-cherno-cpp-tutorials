#include <iostream>

int main()
{
	int variable = 8;
	std::cout << variable << std::endl;
	std::cout << "Size of int: " << sizeof(variable) << std::endl;

	char a = 'a';
	std::cout << '\n' << a << std::endl;

	a = 65;
	std::cout << a << std::endl;
	std::cout << "Size of int: " << sizeof(a) << std::endl;

	float floatNumber = 5.5f;
	std::cout << '\n' << floatNumber << std::endl;
	std::cout << "Size of float: " << sizeof(floatNumber) << std::endl;

	double doubleNumber = 5.2;
	std::cout << '\n' << doubleNumber << std::endl;
	std::cout << "Size of double: " << sizeof(doubleNumber) << std::endl;

	bool isTrue = true;
	bool isFalse = false;

	std::cout << '\n' << isTrue << std::endl;
	std::cout << isFalse << std::endl;
	std::cout << "Size of bool: " << sizeof(bool) << std::endl;
}