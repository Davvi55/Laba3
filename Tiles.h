#pragma once
#include <iostream>
#include <string>
#ifndef TILES_H
#define TILES_H

using namespace std;

class tiles
{
public:
	string brand, price;
	int size_1, size_2;
	void vvod3()
	{
		cout << "������� ����� ������: ";
		cin >> brand;
		cout << "������� size_1 ������: ";
		cin >> size_1;
		cout << "������� size_2 ������: ";
		cin >> size_2;
		cout << "������� ��������� ������: ";
		cin >> price;
		cout << brand << " ������ � size_1= " << size_1 << " � size_2=" << size_2 << " ��������� " << price << endl;
	}
};
#endif 
