#include "String_1.h"
#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	String  s1("Create first  string ");
	cout << "\ns1: " << s1 << endl;
	String s2 = "Create second  string";
	cout << "\ns2: " << s2 << endl;
	String s3;
	cout << "\nInput s3: ";
	Input(s3);
	cout << "\ns3: " << s3 << endl;
	String s4("A string of 80 characters: 11111111111111111111111111111111111111111111111111111", 80);
	cout << "\ns4: " << s4 << endl;
	cout << "\nQ-ty of objects: " << String::Qty_str() << endl;
	_getch();
	return 0;
}