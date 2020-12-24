// ConsoleApplication1.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>

using namespace std;
using namespace System;


int validanumero()
{
	int n;
	cout << "ingrese numero"; cin >> n;
	while (n <= 0 || n > 10)
	{
		cout << "ingrese numero"; cin >> n;
	}return n;

}


void generatabla(int &n)

{
	for (int i = 1; i <= n; i++)
	{
		
		for (int j = 1; j <= n; j++)
			cout << i*j<<"\t";
		cout << endl;
	}
}


int main()
{
	int n = validanumero();
	generatabla(n);
	_getch();
}
