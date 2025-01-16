#ifndef __Fortification_h__
#define __Fortification_h__

#include "BattleStrategy.h"
#include <iostream>

class Fortification : public BattleStrategy {
public:
    void engage() override {
        std::cout << "Fortifying the position to create strong defensive barriers." << std::endl;
    }

    BattleStrategy* clone() const override {
        return new Fortification(*this);  // Clone creates a new instance of the current object
    }
};

#endif
