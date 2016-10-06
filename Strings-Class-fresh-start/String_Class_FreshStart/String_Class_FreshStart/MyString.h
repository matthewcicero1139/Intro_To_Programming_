#pragma once
#include <iostream>
//class going in here along with all function declarations

class MyString
{


	// character array called myArray with length of 10 
	char myArray[456];
	char m_string;

public:


	// need constructors
	//empty construcor
	MyString();
	//constructor passing an array
	MyString(char m_string[]) {};

	//trying to get m_string to = myArray 
	
	// no because m_string is being turned into an array in line 20 (MyString(char m_string[]) {};)
	// and now need to find a away for new array m_string[] to take the string in main and query its
	// length
//	char m_string = myArray;

};

// make m_stirng = myArray
// do i keep it char or do i make it into a MyString

