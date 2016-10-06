// Use loop to iterate values 100 - 0
#include <iostream>
int main()
{
	//backward
//	for (int k = 100; k > -1; --k)
//		std::cout << k << ' ';

	//include 0 and 100
//	for (int k = 0; k < 101; ++k)
//		std::cout << k << ' ';

	//include 0 and not 100
//	for (int k = 0; k < 100; ++k)
//		std::cout << k << ' ';

	//include 100 not 0
//	for (int k = 1; k < 101; ++k)
//		std::cout << k << ' ';

	//decrement by 2
	for (int k = 100; k > -1; k-=2)
		std::cout << k << ' ';


	system("pause");
}