#include "stdafx.h"
#include <iostream>
using namespace std;

int strint(char *str1);
int main( )
{
	char str[20] = "4578";
	//char str[20] = "45a7";
	//char str[20] = "abc";


	int t = strint(str);
	cout << t << endl;

	system("pause");
	return 0;
}

int strint(char *str1) {
	int i;
	int digit = 0;
	for (i = 0; (str1[i] - '0' >= 0) && (str1[i] - '0' <= 9); i++)
		digit = digit * 10 + (str1[i] - '0');
	return digit;
}
