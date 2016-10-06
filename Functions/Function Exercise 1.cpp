#include <iostream>
void PrintInteger(int variable)
{
	std::cout << variable << std::endl;
}
int main()
{
	int the_variable = 1;
	PrintInteger(the_variable); //the_variable identified as 1
	{
		PrintInteger(the_variable); //the_variable still identified as 1 from previous {}
		int the_variable = 2; //redefined the_variable to 2
		PrintInteger(the_variable); //the_variable now ientified as 2 within current {}
		{
			PrintInteger(the_variable); //the_variable still identified as 2 in previous {}
			int the_variable = 3; //redefined to 3
			PrintInteger(the_variable); //the_variable identified as 3 in current{}
		}
		PrintInteger(the_variable); //the_variable identified as 2 because in {} where it was redefined as 2
	}
	PrintInteger(the_variable); //the_variable identified as 1 because in {} where it is still defined as 1
	system("pause");
}

//1 1 2 2 3 2 1