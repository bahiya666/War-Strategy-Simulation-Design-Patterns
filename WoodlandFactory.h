#include <exception>
using namespace std;

#ifndef __WoodlandFactory_h__
#define __WoodlandFactory_h__

// #include "OpenFieldFactory.h"
#include "LegionFactory.h"
#include "IWoodland.h"
#include "CWoodland.h"
#include "AWoodland.h"

class WoodlandFactory : public LegionFactory {
public:
    Infantry* createInfantry() override;
    Cavalry* createCavalry() override;
    Artillery* createArtillery() override;
	public: void deployArtillery();
};

#endif
