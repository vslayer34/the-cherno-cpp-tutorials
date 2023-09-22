#include <iostream>>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplayAndLog(int num1, int num2)
{
	int result = Multiply(num1, num2);
	std::cout << result << std::endl;
}

int main()
{
	MultiplayAndLog(5, 3);
	MultiplayAndLog(2, 3);
	MultiplayAndLog(4, 3);
}