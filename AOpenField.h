
#ifndef __AOpenField_h__
#define __AOpenField_h__

// #include "AWoodland.h"

#include "Artillery.h"
#include <iostream>

class AOpenField : public Artillery {
public:
    void move() override {
        std::cout << "Open Field Artillery being repositioned for optimal range." << std::endl;
    }

    void attack() override {
        std::cout << "Open Field Artillery shooting arrows." << std::endl;
    }
};
#endif
