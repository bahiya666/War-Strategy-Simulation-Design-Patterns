#ifndef __Flanking_h__
#define __Flanking_h__

#include "BattleStrategy.h"
#include <iostream>

class Flanking : public BattleStrategy {
public:
    void engage() override {
        std::cout << "Executing a flanking maneuver to attack the enemy from the sides." << std::endl;
    }

    BattleStrategy* clone() const override {
        return new Flanking(*this);  
    }
};

#endif
