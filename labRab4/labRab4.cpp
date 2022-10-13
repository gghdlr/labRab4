// labRab4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Weapon.h"
#include "string"
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Weapon sword("Sword", 5, 4);
	cout << sword.name << " " << sword.damage << " " << sword.weight << endl;
	Weapon* bow = new Weapon("Bow", 20, 2);
	cout << bow->name << " " << bow->damage << " " << bow->weight << endl << "\n";
	cout << sword.GetWeight(10) << " Вывод true or False" << endl;
	sword.newWeight(5);
	cout << sword.weight << " Сумма переданного веса и веса меча"<< endl;
	sword.newWeight();
	cout << sword.weight << " Сумма переданного веса и веса меча с перегрузкой" << endl;
	delete bow;

	

}

