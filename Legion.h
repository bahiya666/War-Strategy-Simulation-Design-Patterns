#ifndef __Legion_h__
#define __Legion_h__

#include "UnitComponent.h"
#include <vector>
#include <algorithm>
#include <iostream>

class Legion : public UnitComponent {

    // Collection of UnitComponent objects

public:

std::vector<UnitComponent*> components;  
    ~Legion() {
        for (auto component : components) {
            delete component;
        }
    }

    void move() override {
        std::cout << "Legion moving as a single entity." << std::endl;
        for (auto component : components) {
            component->move();
        }
    }

    void attack() override {
        std::cout << "Legion engaging in coordinated combat." << std::endl;
        for (auto component : components) {
            component->attack();
        }
    }

    void add(UnitComponent* component) override {
        components.push_back(component);
    }

    void remove(UnitComponent* component) override {
        auto it = std::find(components.begin(), components.end(), component);
        if (it != components.end()) {
            components.erase(it);
        }
    }
};

#endif
