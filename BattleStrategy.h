#ifndef __BattleStrategy_h__
#define __BattleStrategy_h__

class BattleStrategy {
public:
    virtual ~BattleStrategy() = default;
    virtual void engage() = 0;
    virtual BattleStrategy* clone() const = 0;  
};

#endif
