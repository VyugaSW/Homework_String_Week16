

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
//Task 1
int mystrcmp(const char* str1, const char* str2) {
	return strcmp(str1, str2);
}
int StringToNumber(char* str) {
	return atoi(str);
}
char* NumberToString(int number) {
	char* buff = new char[5];
	_itoa_s(number, buff,5, 10); 
	return buff;
}									
char* Uppercase(char* str1) {
	_strupr_s(str1,50);
	return str1;
}
char* Lowercase(char* str1) {
	_strlwr_s(str1, 50);
	return str1;
}
char* mystrrev(char* str) {
	_strrev(str);
	return str;
}



int main()
{
	const char string[50]{ "Hello" };
	const char string1[50]{ "my World" };
	//cout << mystrcmp(string, string1);

	char* str = new char[50]{ "Goodbye" };
	//cout << StringToNumber(str);

	//cout << NumberToString(5);

	char* str1 = new char[50]{ "Tell me snow, tell me snow" };
	//cout << Uppercase(str1);

	char* str2 = new char[50]{ "HAHA, WHY?" };
	//cout << Lowercase(str2);

	//cout << mystrrev(str1);

}

