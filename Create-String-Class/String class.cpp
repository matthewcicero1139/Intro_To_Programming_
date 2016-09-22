
#include <iostream>
#include "StringHeader.h"
struct a
{
	MyString a;
	char b;

};

class MyString
{
	
	// declaring functions
	// should be in header file but when put here clears error\
	"no suitable constructor exists to conver from "size_t" to "MyString"

	MyString queryLength();
	MyString equals(MyString a, MyString b);
	MyString append(MyString a, MyString b);
	MyString prepend(MyString a, MyString b);

public:

	// Function trying to query the strings length and return an integer.
// Never took out strlen and made it out of my own functions which was not part of the assessment\
	but even still, I could not get it to work with it. 
	MyString queryLength()
	{
		char ria[] =  "ireland";
		strlen(ria);
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
	// need to make a function called query that will add/ count all the characters inside of the character\
	 array which will then return. What do i need to return? return query?\
	 return query.queryLenght();
	MyString queryLength;
	query.queryLength();
	return 0;
}


/* I know that I have more questions but I cant think of how to word them in a way that would be
clear right now.*/

// DOCUMENTATION

// 1. Description: I do not understand how convert a type into another type using a constructor\
which is hindering my finishing of many of the problems because it is causing errors that i do not\
know how to fix.\
	Name:  Query the strings length, returning an integer

// 2. Description: I do not know how to properly use and call a header file within a class. I also dont\
know how to identify where stuff inside the header file goes.\
	Name:  A .h and .cpp file submitted that implements the defined String class as per the\
specifications in Part 1 of the Assessment Description above, following industry-standard coding techniques

// 3. Description: I do not know how to make a comparison of two strings to see if they are the same.\
	Name:  The ability to compare if the string is the same as another string class

// 4. Descripton: I do not know how to setup a function that will make an append to a string,\
 as in I dont know how to begin the set up of how to do it.\
	Name:  The ability to append one string to another

// 5. Description: I dont know how to set up a function that will prepend a string to another.\
	Name:  The ability to prepend one string to another

// 6,7,8. Description: I do not know what a substring is exactly. Like what is the definition of a\
substring and what does it do? how do you use it?\
  6 Name:	The ability to find a sub-string within the string class\
  7 Name:	The ability to find a sub-string within the string class, \
starting from a certain index within the string\
  8 Name: The ability to replace a sub-string found within the string with a different sub-string\

// 9,10. Desctiption: I do not understand what "constant C-style" and "const char" mean. I understand that \
char is a variable type but what does "const" do to it?\
  9 Name:	The ability to return the string as a basic constant C-style string (const char*)\
 10 Name:	The ability to set the string to an input C-style string

// 11,12. Description: I do not understand how to make the strings characters uppercase/lowercase.\
I do know that i need to use a loop to make the duplicates.\
 11 Name:	The ability to convert the string to a duplicate containing all uppercase letters\
 12 Name:	The ability to convert the string to a duplicate containing all lowercase letters\

