// pointer exercises 2, 3, 4

#include <iostream>
int main()
{
	/*	// exercise 2
		int *p;
		int i;
		int k;

		i = 42;
		k = i;
		p = &i;
		*/

		//	/*a*/ k = 75; /*no*/
		//	/*b*/ *k = 75; /*no not a pointer*/
		//	/*c*/ p = 75; /*no*/
		//	/*d*/ *p = 75; /*yes*/
		//	/*e*/ two or more change i to 75 /*no*/

		//	std::cout << i << std::endl;

			// exercise 3

	//		char c = 'A';
	//		double *p = &c;
			// double cannot initialize a character not asigned a numeric value

			//exercise 4
	char blocks[3] = { 'A','B','C' };
	char *ptr = &blocks[0];
	char temp;
	temp = blocks[0];
	temp = *(blocks + 2);
	temp = *(ptr + 1);
	temp = *ptr;
	ptr = blocks + 1;
	temp = *ptr;
	temp = *(ptr + 1);
	ptr = blocks;
	temp = *++ptr;
	temp = ++*ptr;
	temp = *ptr++;
	temp = *ptr;
	return 0;
	//

	system("pause");
}