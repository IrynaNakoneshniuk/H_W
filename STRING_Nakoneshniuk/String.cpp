#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "String.h"


using namespace std;
int String::  count = 0;

String::String(const char* strP, int lengthP)
{
	if (strP && lengthP == 80) {
		length = lengthP+1;
		str = new char[length];
		strncpy(str, strP, length);
	}
	else if (strP && lengthP == 0) {
		length = strlen(strP) + 1;
		str = new char[length];
		strncpy(str, strP, length);
	}
	else {
		length =0;
		str = nullptr;
	}
	count++;
}


int String::Qty_str()
{
	return count;
}

void String::Print()const
{
	cout << str;
}


 String& String::operator=(const char* strP)
{
	strncpy(this->str, strP, strlen(strP));
		return *this;
}


 void Input(String& b)
 {
	 char *s=new char[CHAR_MAX] ;
	 cin.getline(s,std::streamsize (CHAR_MAX));
	 b.length = strlen(s)+1;
	 b.str = new char[b.length];
	 strncpy(b.str, s, strlen(s));
	 b.str[b.length-1] = '\0';
 }

 ostream& operator<<(ostream& stream, const String& b)
{
	b.Print();
	return stream;
}

