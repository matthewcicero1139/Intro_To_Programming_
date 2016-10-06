//	NOT FINISHED


//Program that accepts two numbers and does math operation.
// Problem: Only does first "if" statement and not sure
// how to make it check for other math signs.

#include <iostream>
int main()
{
	int a = 0;
	char b = '-';
	int c = 0;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	//std::cin >> a >> b >> c;

	if (char b = '+')
	{
		std::cout << a + c << std::endl;
	}
	else if (char b = '-')
	{
		std::cout << a - c << std::endl;
	}
	else if (char b = '*')
	{
		std::cout << a * c << std::endl;
	}
	else if (char b = '/')
	{
		std::cout << a / c << std::endl;
	}
	else if (char b = '%')
	{
		std::cout << a % c << std::endl;
	}


	system("pause");
}