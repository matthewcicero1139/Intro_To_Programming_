// Exercise 1
//a) 2 / 3 + 3 / 5 = 0
//b) 2 % 3 + 3 % 5 = 5
//c) 23 % 15 % -2 = 0
//d) 25 * 1 / 2 = 12
//e) 25 * 1.0 / 2 = 12.5 invalid  int * / float
//f) 25 * (1 / 2) = 0
//g) 235 / 8 + 7 = 36
//h) 235 / 8.0 + 7 = 36.375 invalid int / + float
//i) ((20 + 1) / 2 - 2.0) / (23 + 3)*0.2 = 0.0615385 invalid int - * float

// Exercise 2
//a) aHeight
//b) taxRp
//c) taxRm
//d) totCSG

// Exercise 3
//a) int
//b) float
//c) char
//d) int
//f) bool

// Exercise 4
#include <iostream>
int main()
{
	int a = 1;
	int b = 2;
	int t = 0;

	std::cin >> a;
	std::cin >> b;

	t = a;
	a = b;
	b = t;

	printf("%i", a);
	printf(",");
	printf("%i", b);
	system("pause");
}