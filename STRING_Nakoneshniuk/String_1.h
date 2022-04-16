#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <iostream>
using namespace std;
class String
{
	char* str;
	int length;
	static int count;
public:
	String(const char* strP, int lengthP);
	String() :String(nullptr, 0) {};
	String(const char* strP) : String(strP, 0) {};
	~String() { delete[]str; }
	static int Qty_str();
	void Print()const;
	friend void Input(String& b);
	String& operator=(const char* strP);
	friend  ostream& operator <<(ostream& stream, const String& b);
};
