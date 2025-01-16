#ifndef __Infantry_h__
#define __Infantry_h__

#include "UnitComponent.h"
#include "LegionUnit.h"

class Infantry : public UnitComponent, public LegionUnit {
public:
    virtual ~Infantry() = default;  

    public: virtual void move();

	public: virtual void attack();

	public: virtual void add(UnitComponent* aComponent);

	public: virtual void remove(UnitComponent* aComponent);
};

#endif
