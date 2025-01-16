#include <exception>
using namespace std;

#ifndef __LegionUnit_h__
#define __LegionUnit_h__


class LegionUnit {
public:
    virtual ~LegionUnit() = default;
    virtual void move() = 0;
    virtual void attack() = 0;
};

#endif
