#pragma once
#include <iostream>
#include <string>
#ifndef CHILD_H
#define CHILD_H

using namespace std;

class child
{
private:
	string name;
	string surname;
	int age;
public:
	void vvod()
	{
		cout << "������� ��� ������: ";
		cin >> name;
		cout << "������� ������� ������: ";
		cin >> surname;
		cout << "������� ������� ������: ";
		cin >> age;
	}
	void vivod()
	{
		cout << "���������� � ������:" << endl << "���-" << name << endl << "�������-" << surname << endl << "�������-" << age << endl;
	}
};
#endif

