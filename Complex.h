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
		cout << "������� ������������� �����: ";
		cin >> rez;
		cout << "������� ������ �����: ";
		cin >> imz;
	}
	void mod()
	{
		double mod = sqrt(rez * rez + imz * imz);
		cout << "������ = " << mod << endl;
	}
	void argument()
	{
		if (rez != 0)
		{
			double z = imz / rez;
			cout << "�������� = " << z << endl;
		}
		else cout << "���������� ��������� argument.";
	}
};
#endif
