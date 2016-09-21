
#include <iostream>
// make struct that makes MyString equal to char\
cant  make it equal directly. need a way to: swap? maybe\
make them equal to something else then equal the things they are else, equal to the oposites.

struct a
{
	MyString a;
	char b;

};

class MyString
{
	// make Struct that makes mystring equal to char
	


	// declaring functions first.
	MyString queryLength();
	MyString equals(MyString a, MyString b);
	MyString append(MyString a, MyString b);
	MyString prepend(MyString a, MyString b);

public:

	// Function trying to query the strings length and return an integer.
	MyString queryLength()
	{
		MyString ria[10] = { "ireland" };
		strlen(ria);
		std::cout << ria;
		system("pause");
		return strlen(ria);
	}

	// Function trying to compare if the string is the same as another string class
	MyString equals()
	{
		MyString a = MyString("irish");
		MyString b = MyString("luck");
	}

	// Function trying to append one string to another (Put behind)
	MyString append(MyString a, MyString b)
	{

	}

	// Function trying to prepend one string to another (Put infront)
	MyString prepend(MyString a, MyString b)
	{

	}


};

int main()
{
	MyString queryLength;
	query.queryLength();
	return 0;
	
}

// What im doing now:
// trying to make constructor that will convert MyString into type char 

// may need to turn some things already there into structs 

/* ok so structs will probably help with the error about having to convert constructor 
it also has information about dot operator*/ 