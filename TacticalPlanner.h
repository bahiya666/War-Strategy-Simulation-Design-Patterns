#ifndef __TacticalPlanner_h__
#define __TacticalPlanner_h__

#include "TacticalMemento.h"
#include "BattleStrategy.h"

class TacticalPlanner {
private:
    BattleStrategy* currentStrategy; 

public:
    TacticalPlanner() : currentStrategy(nullptr) {} 
    ~TacticalPlanner() { delete currentStrategy; }  

    void setStrategy(BattleStrategy* strategy); 
    TacticalMemento* createMemento();           
    void restoreMemento(TacticalMemento* memento); 
};

#endif
