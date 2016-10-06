// make own problem

#include <iostream>
// swapping fruit

//putting in a struct to swap something
struct fruit
{
	int color;
	int shape;
};

// swapping 
void swap(fruit&a, fruit&b)
{
	fruit c = a;
		a = b;
		b = c;

		return;
}

// now need int main
int main()
{
//	fruit apple = { 1,2 }; // dylan input this now trying to see what it does without it

// commenting out to see what happens below with ints
//	fruit apple = { 1 };
//	fruit orange = { 2 };
//	fruit arrayFruit[2] = { 1,2 };

	//what if i made apple and orange ints and try a reference there?

	int apple = 1;
	int orange = 2;
	int& reference = apple;
	apple = orange;

	printf("%i",apple);

	system("pause");

}