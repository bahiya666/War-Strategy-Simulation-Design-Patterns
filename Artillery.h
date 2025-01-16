#include <exception>
using namespace std;

#ifndef __Artillery_h__
#define __Artillery_h__

#include "UnitComponent.h"
#include "LegionUnit.h"

// class UnitComponent;
// class LegionUnit;
class Artillery;

class Artillery: public UnitComponent, public LegionUnit
{

	public: virtual void move();

	public: virtual void attack();

	public: virtual void add(UnitComponent* aComponent);

	public: virtual void remove(UnitComponent* aComponent);
};

#endif
