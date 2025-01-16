#include <exception>
using namespace std;

#include "Cavalry.h"
#include "LegionUnit.h"
#include "UnitComponent.h"
#include <iostream>

void Cavalry::move() {
	std::cout << "Cavalry moving swiftly across the battlefield." << std::endl;
}

void Cavalry::attack() {
	 std::cout << "Cavalry charging the enemy with a powerful attack." << std::endl;
}

void Cavalry::add(UnitComponent* aComponent) {
	 std::cerr << "Cannot add a component to Cavalry. Cavalry is a leaf node." << std::endl;
}

void Cavalry::remove(UnitComponent* aComponent) {
	std::cerr << "Cannot remove a component from Cavalry. Cavalry is a leaf node." << std::endl;
}
