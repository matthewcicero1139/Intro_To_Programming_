// get 5 numbers from user, store in array, print reverse order
#include <iostream>
int main()
{
	// getting numbers from user
	int a;
	int b;
	int c;
	int d;
	int e;

	std::cin >> a >> b >> c >> d >> e;

	//trying to store in array
	// array called snipe
	int snipe[] = {a,b,c,d,e};

	//trying to print reverse order of how they are input
	std::cout << e << d << c << b << a << std::endl;

	system("pause");

}