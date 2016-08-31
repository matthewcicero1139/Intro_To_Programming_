// Not Working.

// it now is doing more of what it is supposed to but not exactly

#include <iostream>
int main()
{
	//Creating integer points
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	//Allowing the input of user
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;

//	if num is > 0 print nums in ascending order
//		if num is < 0 print nums in descending order
//			if num is = 0 print nums in order input

//	std::cout << a + b + c + d + e << std::endl;
	int k = a + b + c + d + e;

	//Not outputting is ascending or descending order, only the order it was input

	if (k > 0)
	{
		std::cout << a << b << c << d << e << std::endl;
	}
	else if (k < 0)
	{
		std::cout << e << d << c << b << a << std::endl;
	}
	else (k == 0);
	{
		std::cout << a << b << c << d << e << std::endl;
	}

	system("pause");
}
