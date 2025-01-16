
#ifndef __IRiverbank_h__
#define __IRiverbank_h__

#include "Infantry.h"
#include <iostream>

class IRiverbank : public Infantry {
public:
    void move() override {
        std::cout << "Riverbank Infantry moving swiftly across the plains." << std::endl;
    }

    void attack() override {
        std::cout << "Riverbank Infantry charging with a full frontal assault." << std::endl;
    }
};

#endif
