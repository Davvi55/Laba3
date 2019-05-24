#pragma once
#include <iostream>
#include <string>
#ifndef VECTOR_H
#define VECTOR_H

using namespace std;

class vector
{
public:
	int vector1x;
	int vector1y;
	int vector2x;
	int vector2y;
	void ent()
	{
		cout << "Введите координаты x первого вектора: ";
		cin >> vector1x;
		cout << "Введите координаты y первого вектора: ";
		cin >> vector1y;
		cout << "Введите координаты x второго вектора: ";
		cin >> vector2x;
		cout << "Введите координаты y второго вектора: ";
		cin >> vector2y;
	}
	void mod1()
	{
		cout << "Модуль первого вектора = " << sqrt(vector1x * vector1x + vector1y * vector1y) << endl;
	}
	void mod2()
	{
		cout << "модуль второго вектора = " << sqrt(vector2x * vector2x + vector2y * vector2y) << endl;
	}
	void summa()
	{
		cout << "Сумма вектора: x=" << vector1x + vector2x << " y=" << vector1y + vector2y << endl;
	}
	void subtraction()
	{
		cout << "вычитание вектора: x=" << vector1x - vector2x << " y=" << vector1y - vector2y << endl;
	}
};
#endif
