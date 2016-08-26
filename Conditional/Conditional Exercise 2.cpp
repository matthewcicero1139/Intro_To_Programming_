#include <iostream>
int main()
{
	int m = 1;
	int k = 2;
	std::cin >> m;
	std::cin >> k;
	if (m > k)
	{
		printf("%i", m);
		system("pause");
	}
	else
	{
		printf("%i", k);
		system("pause");
		return 0;
	}
}