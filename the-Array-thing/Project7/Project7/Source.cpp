// d = 100 ascii
// how to use arrays
		// make an int array and select a certain index
// make a char array and select a certain index
// make a string and iteratre through it
// make an int and char array with a loop to go through index


#include <iostream>
int main()
{
	//making an int array and index and then selecting a certain point at the index
//	int Array[456] = { 7,56,4,46,6,46,3,894,8,54,3,54,65,48,4,2,5,4 };	
//	return Array[0];

	//making a char array and select a certain index
//	char Array[546] = { 'a','v','d','w','d','y','j','s','q','q','k' };
//	return Array[4];
	//it is returning the ascii table value of the letter how do i change this?
	//what if i do that thing from the homework that made the letter into the value 
	//but i reverse it before i return
	/* how it was done on the other exercise
		char a = 'a';
		int aNum = a;
		char b = 'c';
		int bNum = b;
	*/

	
	// needs to be in a funtion as well 
	// need a while loop
	// reason why the thing keeps stoping at first character is because return breaks out of the loop

	// making a function and putting the array and loop inside of it
	// should it be a character function or an integer function
	// making an int first and seeing if it works
//	int myFunc();
	{
		// making a string array
//		char Array[879] = { "dstring" };

		//making a loop that will increase until reaches a null character in the array
//		for (int i = 0; i < 879; i++)
		{
			// making while function in here
//			while ();
			{
				
			}
		}
	}

	// remaking fresh to get back on track of what does what and where
	// the function
	int myFunc();
	{// character array
		char Array[879] = { "dstring" };
		// my for loop
		for (int i = 0; i < 879; i++)
		{//using a do while loop to try to increment
			do
			{// trying to incrememnt i in a array 
				Array[i++];
			}// dont know what to put into the while conditon
			while (Array[879]);
		}
	}
	// i want to 
	


	// i have it doing something but it is not doing what i want it to do idk what it is doing as of now
	// i want it to increment and c
	// taking out i++ and replacing it with Array[i]
	// what goes in the while loop should it be something for me to incrament
	// what do i increment in the while loop also what should go in the conditoion of the while loop
	// takeing (i = 0, i < 879, i++) out of the while loops condition


	// taking out the return Array[i]
	// putting while loop somewhere should i take out the for loop?
	// is it a while loop or a do while loop?
	
	// still gives the ascii value of certain letters (when i do not have a for loop)
	// the "i" in return is saying it is undefined need to find way to define it
	// what if i make an int above return saying int i = 0 // gives ascii value
	// what if i make the int above the loop // still gives ascii value
	// taking out the int i = 0
	// what if i make an int equal to the loop // not work
	// make a new loop? but for what
	// to get the strings length what do i need. how do i use the loop to return a value
	// going look at loop pdf file to see how to return a value from a loop
	// 
	// what if i get it to give me the ascii value which it does then minus what its value is 
	// except for one then assign it to a value but that doesnt give me the length of the string
	// noticed i had a ; directly after my for loop took it out now my "i" is defined
	//
	// still giving ascii value and only for the first character


	//Noticed what i was doing wrong after viewing the pdf file. i was trying to use the
	// name of the array instead of the size which now fixes problems below
	// types are not compatable int and char  changed int to char
	// types are not compatable char and char*
	// will try to make a new variable named char a and equal it to the array
}

// what if i instead use " for each one instead of ' for them
//	char Array[84] = {"a","e", }
//no does not work