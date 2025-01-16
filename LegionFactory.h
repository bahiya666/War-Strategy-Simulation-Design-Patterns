#include <exception>
using namespace std;

#ifndef __LegionFactory_h__
#define __LegionFactory_h__

#include "LegionUnit.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

class LegionFactory {
public:
    virtual ~LegionFactory() = default;

    virtual Infantry* createInfantry() = 0;
    virtual Cavalry* createCavalry() = 0;
    virtual Artillery* createArtillery() = 0;
};

#endif
