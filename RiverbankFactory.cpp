#include <iostream>
#include "RiverbankFactory.h"
#include "IRiverbank.h"
#include "CRiverbank.h"
#include "ARiverbank.h"


Infantry* RiverbankFactory::createInfantry() {
	std::cout << "Creating Riverbank Infantry unit." << std::endl;
    return new IRiverbank();  
}

Cavalry* RiverbankFactory::createCavalry() {
	std::cout << "Creating Riverbank Cavalry unit." << std::endl;
    return new CRiverbank(); 
}

Artillery* RiverbankFactory::createArtillery() {
	std::cout << "Creating Riverbank Artillery unit." << std::endl;
    return new ARiverbank();  
}

void RiverbankFactory::deployArtillery() {
	std::cout << "Deploying siege engines suitable for riverbank operations." << std::endl;
}
