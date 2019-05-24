#pragma once
#include <iostream>
#include <string>
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class complex
{
public:
	double rez, imz;
	void vvod2()
	{
		cout << "Введите диствительную часть: ";
		cin >> rez;
		cout << "Введите мнимую часть: ";
		cin >> imz;
	}
	void mod()
	{
		double mod = sqrt(rez * rez + imz * imz);
		cout << "Модуль = " << mod << endl;
	}
	void argument()
	{
		if (rez != 0)
		{
			double z = imz / rez;
			cout << "Аргумент = " << z << endl;
		}
		else cout << "Невозможно вычислить argument.";
	}
};
#endif
