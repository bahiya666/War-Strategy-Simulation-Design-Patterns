#include <iostream>
#include "OpenFieldFactory.h"
#include "IOpenField.h"
#include "COpenField.h"
#include "AOpenField.h"

Infantry* OpenFieldFactory::createInfantry() {
    std::cout << "Creating Open Field Infantry unit." << std::endl;
    return new IOpenField();  
}

Cavalry* OpenFieldFactory::createCavalry() {
    std::cout << "Creating Open Field Cavalry unit." << std::endl;
    return new COpenField();  
}

Artillery* OpenFieldFactory::createArtillery() {
    std::cout << "Creating Open Field Artillery unit." << std::endl;
    return new AOpenField();  
}

void OpenFieldFactory::deployArtillery() {
    std::cout << "Deploying siege engines suitable for open field operations." << std::endl;
    
}
