#include <iostream>


int main()
{
	std::cout << std::boolalpha;
	int x = 6;

	bool comparisonResult = x == 5;

	if (x == 5)
	{
		std::cout << "Is x equal 5: " << comparisonResult << std::endl;
	}
	else
	{
		std::cout << "Is x equal 5: " << comparisonResult << std::endl;
	}

	//const char* ptr = "Hello";
	const char* ptr = nullptr;

	if (ptr)
	{
		std::cout << ptr << '\n';
	}
	else
	{
		std::cout << "Pointer is null" << '\n';
	}
}