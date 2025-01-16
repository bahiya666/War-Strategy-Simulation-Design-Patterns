#include <exception>
using namespace std;

#include "Artillery.h"
#include "UnitComponent.h"
#include "LegionUnit.h"
#include <iostream>

void Artillery::move() {
	 std::cout << "Artillery repositioning to a strategic location." << std::endl;
}

void Artillery::attack() {
	std::cout << "Artillery firing long-range projectiles at the enemy." << std::endl;
}

void Artillery::add(UnitComponent* aComponent) {
	std::cerr << "Cannot add a component to Artillery. Artillery is a leaf node." << std::endl;
}

void Artillery::remove(UnitComponent* aComponent) {
	 std::cerr << "Cannot remove a component from Artillery. Artillery is a leaf node." << std::endl;
}


