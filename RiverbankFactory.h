#include <exception>
using namespace std;

#ifndef __RiverbankFactory_h__
#define __RiverbankFactory_h__

#include "LegionFactory.h"
#include "IRiverbank.h"
#include "CRiverbank.h"
#include "ARiverbank.h"

class RiverbankFactory : public LegionFactory {
public:
    Infantry* createInfantry() override;
    Cavalry* createCavalry() override;
    Artillery* createArtillery() override;
	public: void deployArtillery();
};

#endif
