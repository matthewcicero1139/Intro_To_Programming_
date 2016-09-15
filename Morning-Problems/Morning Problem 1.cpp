// 9/15/16

// not finished still working on it

/* Create a function that takes in three numbers and 
returns the sum of these numbers multiplied by 5.
(should be able to handle floating and integer values)*/

// function
float add(float a, float b, float c)
{
	float sum = a + b + c;
	return sum * 5;
}

#include <iostream>
int main()
{
// allow user to enter numbers
	float a;
	float b;
	float c;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	system("pause");
}

/* problems:
 - is only accepting entered numbers.
 - unsure if function is initialized
 - is not doing the function *could be because uninitialized*
 */