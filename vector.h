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
		cout << "������� ���������� x ������� �������: ";
		cin >> vector1x;
		cout << "������� ���������� y ������� �������: ";
		cin >> vector1y;
		cout << "������� ���������� x ������� �������: ";
		cin >> vector2x;
		cout << "������� ���������� y ������� �������: ";
		cin >> vector2y;
	}
	void mod1()
	{
		cout << "������ ������� ������� = " << sqrt(vector1x * vector1x + vector1y * vector1y) << endl;
	}
	void mod2()
	{
		cout << "������ ������� ������� = " << sqrt(vector2x * vector2x + vector2y * vector2y) << endl;
	}
	void summa()
	{
		cout << "����� �������: x=" << vector1x + vector2x << " y=" << vector1y + vector2y << endl;
	}
	void subtraction()
	{
		cout << "��������� �������: x=" << vector1x - vector2x << " y=" << vector1y - vector2y << endl;
	}
};
#endif
