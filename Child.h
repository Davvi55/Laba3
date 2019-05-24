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
		cout << "Введите имя ребёнка: ";
		cin >> name;
		cout << "Введите фамилию ребёнка: ";
		cin >> surname;
		cout << "Введите возраст ребёнка: ";
		cin >> age;
	}
	void vivod()
	{
		cout << "Информация о ребёнке:" << endl << "Имя-" << name << endl << "Фамилия-" << surname << endl << "Возраст-" << age << endl;
	}
};
#endif

