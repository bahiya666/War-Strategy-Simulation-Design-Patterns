
#ifndef __CWoodland_h__
#define __CWoodland_h__

// #include "COpenField.h"

#include "Cavalry.h"
#include <iostream>

class CWoodland : public Cavalry {
public:
    void move() override {
        std::cout << "Woodland Cavalry galloping rapidly on flat terrain." << std::endl;
    }

    void attack() override {
        std::cout << "Woodland Cavalry executing a devastating charge." << std::endl;
    }
};
#endif
