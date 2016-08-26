#include <iostream>
int main()
{
	int y = 0;
	int x = 1;
	//int t = 0;
	{
		if (y == 0)
		{
			x = 100;
			printf("%i", x);
		}
		else
		{
			x = 0;
			printf("%i", x);
			//system("pause");
		}
	}
	system("pause");
}