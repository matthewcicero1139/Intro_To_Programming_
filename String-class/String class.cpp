// ask strings length and return value

// need a class
//class; construcer; members
class String
{
public:
	String() {};
	String(char s) {
		char ria[10] = "irish"; 

/*		char ria[10] = "irish";
		strlen(ria);
		int ish = strlen(ria);
	//cannot return value from inside constructor
	//	return ish;
		*/
	};

private:
	// use these to make conversion?
	int m_cic;
	char m_a[10];

};

//use class to query a strings length



#include <iostream>
int main()
{//need function asking about strings length
	// function querying string length

	//int sL(char ria);
	//{
	//	char ria[10] = "irish";//should be 5
	//	strlen(ria);
	//	int ish = strlen(ria);
	//	return ish;
	//}

	/*how to make a conversion from string and int?*/

	String a = String('d');
	strlen(a);
	int ish = strlen(a);
	return ish;
	


	

	//no conversion from string to int.
	//return ish;


/* how mr matthew explained classes

	String abc = String();
	String abcwithchar = String('f');
	char d;
	
	int b; */
}
//
//int func()
//{
//
//}