# War-Strategy-Simulation-Design-Patterns
Description
This project demonstrates the use of several Design Patterns to simulate and manage various tactical operations in a military setting. The simulation models different battle scenarios and strategies using various patterns, including Abstract Factory, Strategy, Memento, and Composite. The units (Infantry, Cavalry, Artillery) are created using different factories based on terrain types (Open Field, Woodland, Riverbank), and tactical decisions are made using different strategies (Flanking, Fortification, Ambush). The state of strategies can be saved and restored using the Memento pattern, while the Composite pattern allows units to be organized into legions.

Features
Abstract Factory Pattern: Creates different units (Infantry, Cavalry, Artillery) depending on the terrain type (Open Field, Woodland, Riverbank).
Strategy Pattern: Defines various strategies (Flanking, Fortification, Ambush) that can be set dynamically to execute different tactics.
Memento Pattern: Saves and restores the state of strategies, allowing tactical decisions to be revisited and restored.
Composite Pattern: Groups individual units into a legion, allowing for collective movement and combat.

Files:
OpenFieldFactory.h - Defines the factory for creating units suitable for open field conditions (Infantry, Cavalry, Artillery).
WoodlandFactory.h - Defines the factory for creating units suited for woodland conditions.
RiverbankFactory.h - Defines the factory for creating units suited for riverbank conditions.
TacticalCommand.h - Implements the command class that sets and executes strategies.
Flanking.h - Implements the Flanking strategy.
Fortification.h - Implements the Fortification strategy.
Ambush.h - Implements the Ambush strategy.
Legion.h - Contains the Legion class that uses the Composite pattern to group units.
Infantry.h - Contains the Infantry class representing infantry units.
Cavalry.h - Contains the Cavalry class representing cavalry units.
Artillery.h - Contains the Artillery class representing artillery units.
Main.cpp - Contains the main() function, tests the various design patterns by calling testFactory(), testStrategy(), testMemento(), and testComposite().

Design Patterns Used
Abstract Factory Pattern
The Abstract Factory Pattern is used to create different types of units based on the environment (Open Field, Woodland, Riverbank). Each environment has its own factory (OpenFieldFactory, WoodlandFactory, RiverbankFactory) that creates the appropriate units for that terrain.

Strategy Pattern
The Strategy Pattern is implemented to allow dynamic changes in military tactics. The TacticalCommand class can switch between different strategies (Flanking, Fortification, Ambush) at runtime, and execute the current strategy.

Memento Pattern
The Memento Pattern allows the state of the current strategy to be saved and restored. The TacticalCommand class can save the strategy at a specific point (saveCurrentStrategy()) and restore a previous strategy (restoreStrategy()), helping the command to revisit successful strategies or undo changes.

Composite Pattern
The Composite Pattern is used to group individual military units (Infantry, Cavalry, Artillery) into a Legion. A Legion can manage its units collectively, moving and attacking as a single entity. The Legion class supports adding, removing, and performing actions on both individual units and sub-legions.

Functions
testFactory()
This function tests the Abstract Factory Pattern by creating Infantry, Cavalry, and Artillery units using different terrain-specific factories (OpenFieldFactory, WoodlandFactory, RiverbankFactory). It then tests each unit's ability to move and attack.

testStrategy()
This function tests the Strategy Pattern by setting different strategies (Flanking, Fortification, Ambush) using the TacticalCommand class. The strategy can be changed dynamically, and the respective strategy is executed.

testMemento()
This function tests the Memento Pattern by saving and restoring strategies within the TacticalCommand class. Strategies are saved with meaningful names and can be restored later, demonstrating how previous tactical decisions can be revisited.

testComposite()
This function tests the Composite Pattern by creating individual units (Infantry, Cavalry, Artillery) and grouping them into a Legion. It shows how units can be added, removed, and collectively moved and attacked as part of a Legion.

Compilation and Execution
Compile the program using a C++ compiler:
g++ -o war_strategy_simulation main.cpp

Run the executable:
./war_strategy_simulation
