
#ifndef __CRiverbank_h__
#define __CRiverbank_h__

#include "Cavalry.h"
#include <iostream>

class CRiverbank : public Cavalry {
public:
    void move() override {
        std::cout << "Riverbank Cavalry galloping rapidly on flat terrain." << std::endl;
    }

    void attack() override {
        std::cout << "Riverbank Cavalry executing a devastating charge." << std::endl;
    }
};

#endif
