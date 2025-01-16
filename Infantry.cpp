#include <exception>
using namespace std;

#include "Infantry.h"
#include "UnitComponent.h"
#include "LegionUnit.h"
#include <iostream>

void Infantry::move() {
	std::cout << "Infantry moving to the designated position." << std::endl;
}

void Infantry::attack() {
	std::cout << "Infantry engaging in combat with close-range weapons." << std::endl;
}

void Infantry::add(UnitComponent* aComponent) {
	std::cerr << "Cannot add a component to Infantry. Infantry is a leaf node." << std::endl;
}

void Infantry::remove(UnitComponent* aComponent) {
	std::cerr << "Cannot remove a component from Infantry. Infantry is a leaf node." << std::endl;
}

