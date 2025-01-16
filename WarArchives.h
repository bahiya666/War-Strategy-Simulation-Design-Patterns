#ifndef __WarArchives_h__
#define __WarArchives_h__

#include "TacticalMemento.h"
#include <map>
#include <string>

class WarArchives {
private:
    std::map<std::string, TacticalMemento*> mementoMap; 

public:
    ~WarArchives(); 

    void addTacticalMemento(TacticalMemento* memento, const std::string& label); 
    void removeTacticalMemento(const std::string& label); 
    TacticalMemento* getTacticalMemento(const std::string& label); 
};

#endif
