#include <iostream>
#include "OpenFieldFactory.h"
#include "WoodlandFactory.h"
#include "RiverbankFactory.h"
#include "TacticalCommand.h"
#include "Flanking.h"
#include "Fortification.h"
#include "Ambush.h"
#include "Legion.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

void testFactory(LegionFactory* factory, const std::string& factoryName) {
    std::cout << "Testing " << factoryName << " Factory:" << std::endl;

    // Create units using the factory
    Infantry* infantry = factory->createInfantry();
    Cavalry* cavalry = factory->createCavalry();
    Artillery* artillery = factory->createArtillery();

    // Test Infantry unit
    std::cout << "Testing Infantry unit:" << std::endl;
    infantry->move();
    infantry->attack();

    // Test Cavalry unit
    std::cout << "Testing Cavalry unit:" << std::endl;
    cavalry->move();
    cavalry->attack();

    // Test Artillery unit
    std::cout << "Testing Artillery unit:" << std::endl;
    artillery->move();
    artillery->attack();

    // Clean up
    delete infantry;
    delete cavalry;
    delete artillery;

    
}


void testStrategy(){
    TacticalCommand command;

    // Set and execute Flanking strategy
    command.setStrategy(new Flanking());
    std::cout << "Current Strategy: Flanking" << std::endl;
    command.executeStrategy();

    // Change to Fortification strategy
    command.setStrategy(new Fortification());
    std::cout << "Current Strategy: Fortification" << std::endl;
    command.executeStrategy();

    // Change to Ambush strategy
    command.setStrategy(new Ambush());
    std::cout << "Current Strategy: Ambush" << std::endl;
    command.executeStrategy();

    // Demonstrate choosing the best strategy 
    command.chooseBestStrategy();

}

void testMemento() {
    TacticalCommand command;

    // Set and execute Flanking strategy
    command.setStrategy(new Flanking());
    std::cout << "Current Strategy: Flanking" << std::endl;
    command.executeStrategy();
    command.saveCurrentStrategy("First Encounter");

    // Change to Fortification strategy
    command.setStrategy(new Fortification());
    std::cout << "Current Strategy: Fortification" << std::endl;
    command.executeStrategy();
    command.saveCurrentStrategy("Defensive Stance");

    // Change to Ambush strategy
    command.setStrategy(new Ambush());
    std::cout << "Current Strategy: Ambush" << std::endl;
    command.executeStrategy();
    command.saveCurrentStrategy("Surprise Attack");

    // Restore to a previous strategy
    command.restoreStrategy("First Encounter");
    std::cout << "Restored Strategy to First Encounter" << std::endl;
    command.executeStrategy();
}

void testComposite(){
     // Create individual units
    Infantry* infantry1 = new Infantry();
    Infantry* infantry2 = new Infantry();
    Cavalry* cavalry1 = new Cavalry();
    Artillery* artillery1 = new Artillery();

    // Create a legion and add individual units to it
    Legion* legion = new Legion();
    legion->add(infantry1);
    legion->add(infantry2);
    legion->add(cavalry1);
    legion->add(artillery1);

    std::cout << "------------------------------------------" << std::endl;

    std::cout << "Number of units in the legion: " << legion->components.size() << std::endl;

    legion->remove(infantry1);

    std::cout << "Number of units in the legion after removal: " << legion->components.size() << std::endl;

    std::cout << "------------------------------------------" << std::endl;

    // Create a sub-legion and add it to the main legion
    Legion* subLegion = new Legion();
    subLegion->add(new Infantry());
    subLegion->add(new Cavalry());

    legion->add(subLegion);

    // Test moving and fighting with the legion
    std::cout << "Legion Movement:" << std::endl;
    legion->move();

    std::cout << "\nLegion Combat:" << std::endl;
    legion->attack();

    delete legion;
    // delete infantry1;
    // delete infantry2;
    // delete cavalry1;
    // delete artillery1;
    // delete subLegion;
}


int main() {

    std::cout << "------------------------------------------" << std::endl;
    std::cout<<"Testing Abstract Factory:"<<std::endl;
    // Testing Open Field Factory
    OpenFieldFactory openFieldFactory;
    testFactory(&openFieldFactory, "Open Field");

    // Testing Woodland Factory
    WoodlandFactory woodlandFactory;
    testFactory(&woodlandFactory, "Woodland");

    // Testing Riverbank Factory
    RiverbankFactory riverbankFactory;
    testFactory(&riverbankFactory, "Riverbank");
    std::cout << "------------------------------------------" << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    std::cout<<"Testing Strategy Pattern:"<<std::endl;
    testStrategy();
    std::cout << "------------------------------------------" << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    std::cout<<"Testing Memento Pattern:"<<std::endl;
    testMemento();
    std::cout << "------------------------------------------" << std::endl;

    std::cout << "------------------------------------------" << std::endl;
    std::cout<<"Testing Composite Pattern:"<<std::endl;
    testComposite();
    std::cout << "------------------------------------------" << std::endl;

    return 0;
}
