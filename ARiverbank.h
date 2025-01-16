
#ifndef __ARiverbank_h__
#define __ARiverbank_h__

#include "Artillery.h"
#include <iostream>

// class Artillery;
class ARiverbank : public Artillery {
public:
    void move() override {
        std::cout << "Riverbank Artillery being repositioned for optimal range." << std::endl;
    }

    void attack() override {
        std::cout << "Riverbank Artillery shooting arrows." << std::endl;
    }
};
#endif
