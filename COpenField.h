
#ifndef __COpenField_h__
#define __COpenField_h__

// #include "CWoodland.h"

#include "Cavalry.h"
#include <iostream>

class COpenField : public Cavalry {
public:
    void move() override {
        std::cout << "Open Field Cavalry galloping rapidly on flat terrain." << std::endl;
    }

    void attack() override {
        std::cout << "Open Field Cavalry executing a devastating charge." << std::endl;
    }
};


#endif
