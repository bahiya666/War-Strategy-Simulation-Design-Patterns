#ifndef __TacticalCommand_h__
#define __TacticalCommand_h__

#include "BattleStrategy.h"
#include "WarArchives.h"

class TacticalCommand {
private:
    BattleStrategy* strategy;  
    WarArchives archives;

public:
    TacticalCommand() : strategy(nullptr) {}  
    ~TacticalCommand() { delete strategy; }  

    void setStrategy(BattleStrategy* s);  
    void executeStrategy();              
    void chooseBestStrategy();           
    void saveCurrentStrategy(const std::string& label);  
    void restoreStrategy(const std::string& label);     
};

#endif
