#ifndef __UnitComponent_h__
#define __UnitComponent_h__

class UnitComponent {
public:
    virtual ~UnitComponent() = default;

    virtual void move() = 0;                 
    virtual void attack() = 0;                
    virtual void add(UnitComponent* aComponent) = 0;   
    virtual void remove(UnitComponent* aComponent) = 0;
};

#endif
