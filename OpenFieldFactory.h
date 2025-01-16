#include <exception>
using namespace std;

#ifndef __OpenFieldFactory_h__
#define __OpenFieldFactory_h__

// #include "WoodlandFactory.h"
#include "LegionFactory.h"
#include "IOpenField.h"
#include "COpenField.h"
#include "AOpenField.h"

class OpenFieldFactory : public LegionFactory {
public:
    Infantry* createInfantry() override;
    Cavalry* createCavalry() override;
    Artillery* createArtillery() override;
	public: void deployArtillery();
};

#endif
