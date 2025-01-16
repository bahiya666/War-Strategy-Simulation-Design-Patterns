#ifndef __Ambush_h__
#define __Ambush_h__

#include "BattleStrategy.h"
#include <iostream>

class Ambush : public BattleStrategy {
public:
    void engage() override {
        std::cout << "Setting up an ambush to surprise the enemy." << std::endl;
    }

    BattleStrategy* clone() const override {
        return new Ambush(*this);  // Clone creates a new instance of the current object
    }
};

#endif
