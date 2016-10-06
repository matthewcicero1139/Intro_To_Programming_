#include <iostream>
int main()
{
	int i = 0;
	float f = 0;
	char ch = 'a';
	std::cin >> i >> ch >> f;
	std::cout << "i: " << i << "\nch: " << ch << "\nf: " << f << std::endl;	//a) 1 A 45 : Output i:1, ch:A, f:45
	//b) 1A45 : Output i:1, ch:A, f:45
	//c 1 9 45 : Output i:1, ch:9, f:45
	//d 1 945 : Output i:1, ch:9,, f:45
	//e B 45.6 : Output i:0, ch:a, f:0
	//f 1BC5.6 : Output i:1, ch:B, f:0
	system("pause");
}