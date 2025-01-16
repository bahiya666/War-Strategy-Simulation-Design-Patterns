
#ifndef __AWoodland_h__
#define __AWoodland_h__

// #include "AOpenField.h"
#include "Artillery.h"
#include <iostream>

class AWoodland : public Artillery {
public:
    void move() override {
        std::cout << "Woodland Artillery being repositioned for optimal range." << std::endl;
    }

    void attack() override {
        std::cout << "Woodland Artillery shooting arrows." << std::endl;
    }
};

#endif
