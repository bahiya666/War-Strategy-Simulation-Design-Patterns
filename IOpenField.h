
#ifndef __IOpenField_h__
#define __IOpenField_h__

// #include "IWoodland.h"

#include "Infantry.h"
#include <iostream>

class IOpenField : public Infantry {
public:
    void move() override {
        std::cout << "Open Field Infantry moving swiftly across the plains." << std::endl;
    }

    void attack() override {
        std::cout << "Open Field Infantry charging with a full frontal assault." << std::endl;
    }
};

#endif
