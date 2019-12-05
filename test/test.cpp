#include<string>
#include<vector>
#include<iostream>
#include <cstring>

using namespace std;


extern "C" __declspec(dllexport) int Add(int a, int b)
{

	return a + b;
}

extern "C" __declspec(dllexport) int Add1(char* pin)
{	
	return strlen(pin);
}