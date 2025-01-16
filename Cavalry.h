#include <exception>
using namespace std;

#ifndef __Cavalry_h__
#define __Cavalry_h__

#include "LegionUnit.h"
#include "UnitComponent.h"

// class LegionUnit;
// class UnitComponent;
class Cavalry;

class Cavalry: public LegionUnit, public UnitComponent
{

	public: virtual void move();

	public: virtual void attack();

	public: virtual void add(UnitComponent* aComponent);

	public: virtual void remove(UnitComponent* aComponent);
};

#endif
