#include <iostream>
#include "WoodlandFactory.h"
#include "IWoodland.h"
#include "CWoodland.h"
#include "AWoodland.h"

Infantry* WoodlandFactory::createInfantry() {
    std::cout << "Creating Woodland Infantry unit." << std::endl;
    return new IWoodland();  
}

Cavalry* WoodlandFactory::createCavalry() {
    std::cout << "Creating Woodland Cavalry unit." << std::endl;
    return new CWoodland();  
}

Artillery* WoodlandFactory::createArtillery() {
    std::cout << "Creating Woodland Artillery unit." << std::endl;
    return new AWoodland();  
}

void WoodlandFactory::deployArtillery() {
    std::cout << "Deploying siege engines suitable for open woodland operations." << std::endl;
    
}
