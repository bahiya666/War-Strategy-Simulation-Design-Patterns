#include "TacticalCommand.h"
#include "TacticalPlanner.h"
#include <iostream>


void TacticalCommand::setStrategy(BattleStrategy* s) {
    if (strategy) delete strategy;
    strategy = s ? s->clone() : nullptr;  // Clone the strategy
}

void TacticalCommand::executeStrategy() {
    if (strategy) {
        strategy->engage();
    } else {
        std::cout << "No strategy set. Please set a strategy first." << std::endl;
    }
}

void TacticalCommand::chooseBestStrategy() {
    std::cout << "Choosing the best strategy based on stored mementos..." << std::endl;

}

void TacticalCommand::saveCurrentStrategy(const std::string& label) {
    if (strategy) {
        TacticalPlanner planner;
        planner.setStrategy(strategy);
        TacticalMemento* memento = planner.createMemento();
        archives.addTacticalMemento(memento, label);
    } else {
        std::cout << "No strategy to save." << std::endl;
    }
}

void TacticalCommand::restoreStrategy(const std::string& label) {
    TacticalMemento* memento = archives.getTacticalMemento(label);
    if (memento) {
        BattleStrategy* restoredStrategy = memento->getStoredStrategy();
        setStrategy(restoredStrategy);
        delete restoredStrategy;  
    }
}
