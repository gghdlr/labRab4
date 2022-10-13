#include "Weapon.h"
#include <iostream>
Weapon::Weapon(string name, int damage, int weight) {
	this->name = name;
	this->damage = damage;
	this->weight = weight;
}
int Weapon::GetWeight(int get) {
	if (weight > get) {
		return true;
	}
	else {
		return false;
	}
}
void Weapon::newWeight(int get) {
	weight += get;
}
void Weapon::newWeight() {
	newWeight(1);
}
//Weapon::Weapon()::Weapon(name, damage, weight){}