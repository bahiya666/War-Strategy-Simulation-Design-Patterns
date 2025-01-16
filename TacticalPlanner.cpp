#include "TacticalPlanner.h"
#include <iostream>

void TacticalPlanner::setStrategy(BattleStrategy* strategy) {
    if (currentStrategy) {
        delete currentStrategy;
    }
    currentStrategy = strategy ? strategy->clone() : nullptr;
}

TacticalMemento* TacticalPlanner::createMemento() {
    std::cout << "Saving current strategy to memento." << std::endl;
    return new TacticalMemento(currentStrategy);
}

void TacticalPlanner::restoreMemento(TacticalMemento* memento) {
    if (memento) {
        setStrategy(memento->getStoredStrategy());
        std::cout << "Restored strategy from memento." << std::endl;
    } else {
        std::cout << "No memento provided to restore from." << std::endl;
    }
}
