#include "TacticalMemento.h"

void TacticalMemento::storeStrategy(BattleStrategy* strategy) {
    if (storedStrategy) {
        delete storedStrategy; 
    }
    storedStrategy = strategy ? strategy->clone() : nullptr;  
}
