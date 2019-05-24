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
		cout << "¬ведите бренд плитки: ";
		cin >> brand;
		cout << "¬ведите size_1 плитки: ";
		cin >> size_1;
		cout << "¬ведите size_2 плитки: ";
		cin >> size_2;
		cout << "введите стоймость плитки: ";
		cin >> price;
		cout << brand << " плитка с size_1= " << size_1 << " и size_2=" << size_2 << " стоймость " << price << endl;
	}
};
#endif 
