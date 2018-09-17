// ConsoleApplication33.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>


using namespace std;


//2.	Написать функцию, которая приводит строку к нижнему регистру.  Проиллюстрировать работу функции примером.
void lowercase(char a[]) {
	int i = 0;
	while (a[i])
	{
		a[i] = (char)tolower(a[i]);
		i++;
	}
	
}

//Написать функцию, которая определяет является ли строка палиндромом (т.е. строкой, которую можно читать и слева направо, и справа налево: «А роза упала на лапу Азора», «Аргентина манит негра», «Я ем змея»).


//удаление пробелов
char* delSpace(char *str) {

	char* from = str;
	char* to = str;

	while (*from)
	{
		if (*from != ' ')
		{
			*to = *from;
			to++;
		}
		from++;
	}
	*to = 0;
	return str;
}

//проверка на палиндром
void strP(char x[]) {
	int z = 1;
	for (int i = 0; i < strlen(x) / 2; i++)
	{
		if (x[i] != x[strlen(x) - i - 1]) {
			z = 0;	break;
		}
	}
	if (z == 1) cout << "палиндромом!" << endl; else cout << "не палиндромом!" << endl;
}



int main()
{
	
	setlocale(LC_ALL, "rus");

	char s[100] = "А роза упала на лапу Азора";
	cout << s << endl;
	
	delSpace(s);
	lowercase(s);
	strP(s);
	cout << endl;

	strcpy_s(s, "Аргентина манит негра");
	cout << s << endl;

	delSpace(s);
	lowercase(s);
	strP(s);
	cout << endl;

	strcpy_s(s, "Я ем змея");
	cout << s << endl;

	delSpace(s);
	lowercase(s);
	strP(s);
	cout << endl;

    return 0;
}

