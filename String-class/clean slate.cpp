
//char ria;
//String a;
//int a;


class String
{
public:
	String(int a) {};
	String(char s) {
		char ria[10] = "irish";
	};
		/*		char ria[10] = "irish";
		strlen(ria);
		int ish = strlen(ria);
		//cannot return value from inside constructor
		//	return ish;
		*/

private:
	// something in here i need to use
	int m_a;// = strlen(ria);
	char m_a[10];
};

#include <iostream>
int main()
{
	


	String m = String('d');
	strlen(a);
	int ish = strlen(a);
	return ish;
}