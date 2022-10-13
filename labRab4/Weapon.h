#pragma once
#include <iostream>
using namespace std;
class Weapon
{
public:
	string name;
	int damage;
	int weight;
	Weapon(string name, int damage, int weight);
	Weapon();
	~Weapon() {
		cout << "Объект " << name << " " << damage << " " << weight << " уничтожается\n";
	}
	int GetWeight(int get);
	void newWeight(int get);
	void newWeight();
};

