/*Of the 4 I was able to setup only 1 is working if that is even working. The others I dont know how to setup at all*/

/* idk what im doing wrong. This is all that I can come up with.
Ive tried commenting the things that are giving me trouble and
what I think is wrong with the code but idk how to fix them.
Ive used books and youtube and, though they have helped me
understand more, I am still unable to figure out why some 
things are wrong.*/

// dont have a header file and dont know what to put inside header file
//dont know how to access certain index within string class


#include <iostream>

//made a class called MyString
class MyString
{
	//made a function inside that is public
public:
	/*function with type char called queryLength with no parameters
	*changed to char from class name and red disappeared so i kept it like that*
	function asks the strings length and returns the value*/
	char queryLength()
	{
		/* not understanding why char gets rid of red and class name "MyString" makes red appear*/
		char ria[10] = { "ireland" };
		strlen(ria);
		//printing for my own use should be deleted
		std::cout << ria;
		system("pause");
		//returning the value of char array ria
		return strlen(ria);

	}
	MyString equals()
	{
		//trying to compare. not sure if how you do it
		//red is saying no convert from const char to MyString. dont know how to make a conversion constructor.
		MyString a = MyString("irish");
		MyString b = MyString("luck");
		//dont know what it mean to many arguments in function call
		a.equals(b);

		//trying to append "luck" to end of "irish" should come out as "irish luck"
		// not working at all. dont know how to actually set up for both append and prepend
		a.append(b);
		// trying to prepend "luck" to "irish" should come out as "luck irish"
		a.prepend(b);
	}
	

};

int main()
{
	MyString query;
	query.queryLength();
	return 0;
}