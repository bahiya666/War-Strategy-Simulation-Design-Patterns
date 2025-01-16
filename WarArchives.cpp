#include "WarArchives.h"
#include <iostream>

WarArchives::~WarArchives() {
    for (auto& pair : mementoMap) {
        delete pair.second;
    }
}

void WarArchives::addTacticalMemento(TacticalMemento* memento, const std::string& label) {
    if (mementoMap.find(label) == mementoMap.end()) {
        mementoMap[label] = memento;
        std::cout << "Memento added with label: " << label << std::endl;
    } else {
        std::cout << "Memento with label '" << label << "' already exists. Overwriting..." << std::endl;
        delete mementoMap[label]; 
        mementoMap[label] = memento;
    }
}

void WarArchives::removeTacticalMemento(const std::string& label) {
    auto it = mementoMap.find(label);
    if (it != mementoMap.end()) {
        delete it->second;
        mementoMap.erase(it);
        std::cout << "Memento removed with label: " << label << std::endl;
    } else {
        std::cout << "No memento found with label: " << label << std::endl;
    }
}

TacticalMemento* WarArchives::getTacticalMemento(const std::string& label) {
    auto it = mementoMap.find(label);
    if (it != mementoMap.end()) {
        return it->second;
    } else {
        std::cout << "No memento found with label: " << label << std::endl;
        return nullptr;
    }
}
