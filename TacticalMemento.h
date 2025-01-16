#ifndef __TacticalMemento_h__
#define __TacticalMemento_h__

#include "BattleStrategy.h"

class TacticalMemento {
private:
    BattleStrategy* storedStrategy;

public:
    TacticalMemento(BattleStrategy* strategy) : storedStrategy(strategy ? strategy->clone() : nullptr) {} 
    ~TacticalMemento() { delete storedStrategy; } 
    BattleStrategy* getStoredStrategy() const { return storedStrategy ? storedStrategy->clone() : nullptr; } 
    void storeStrategy(BattleStrategy* strategy);
};

#endif
