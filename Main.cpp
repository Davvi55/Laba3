#include <iostream>
#include "Child.h"
#include "CompleX.h"
#include "Tiles.h"
#include "Vector.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	child a;
	child b;
	a.vvod();
	a.vivod();
	b.vvod();
	b.vivod();
	complex c;
	c.vvod2();
	c.mod();
	c.argument();
	tiles a1;
	tiles b1;
	tiles c1;
	a1.vvod3();
	b1.vvod3();
	c1.vvod3();
	vector v;
	v.ent();
	int operation = 0;
	while (operation != 5)
	{
		cout << "�������� ��������, ������ ������ ���������: " << endl;
		cout << "1. ����� ������ ������� �������" << endl;
		cout << "2. ����� ������ ������� �������" << endl;
		cout << "3. ����� �����" << endl;
		cout << "4. ����� ���������" << endl;
		cout << "5. �����" << endl;
		cout << "��������: ";
		cin >> operation;
		if (operation < 1 || operation > 5)
		{
			while (operation < 1 || operation > 5)
			{
				cout << "�������� ����������, �������� ������ ��������: ";
				cin >> operation;
			}
		}
		switch (operation)
		{
		case 1:
			v.mod1();
			break;
		case 2:
			v.mod2();
			break;
		case 3:
			v.summa();
			break;
		case 4:
			v.subtraction();
			break;
		case 5:
			break;
		}
	}
}