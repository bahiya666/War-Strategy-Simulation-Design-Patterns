
#ifndef __IWoodland_h__
#define __IWoodland_h__

// #include "IOpenField.h"

#include "Infantry.h"
#include <iostream>

class IWoodland : public Infantry {
public:
    void move() override {
        std::cout << "Woodland Infantry moving swiftly across the plains." << std::endl;
    }

    void attack() override {
        std::cout << "Woodland Infantry charging with a full frontal assault." << std::endl;
    }
};

#endif
