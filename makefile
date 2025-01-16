# Compiler
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Targets
TARGET = main

# Object files
OBJECTS = main.o Legion.o Infantry.o Cavalry.o Artillery.o \
          IRiverbank.o CRiverbank.o ARiverbank.o \
          IOpenField.o COpenField.o AOpenField.o \
          IWoodland.o CWoodland.o AWoodland.o \
          RiverbankFactory.o WoodlandFactory.o OpenFieldFactory.o \
          Flanking.o Fortification.o Ambush.o \
          TacticalCommand.o TacticalMemento.o TacticalPlanner.o \
          WarArchives.o

# Rules
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

main.o: main.cpp Legion.h Infantry.h Cavalry.h Artillery.h \
        IRiverbank.h CRiverbank.h ARiverbank.h \
        IOpenField.h COpenField.h AOpenField.h \
        IWoodland.h CWoodland.h AWoodland.h \
        RiverbankFactory.h WoodlandFactory.h OpenFieldFactory.h \
        Flanking.h Fortification.h Ambush.h \
        TacticalCommand.h TacticalMemento.h TacticalPlanner.h \
        WarArchives.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Legion.o: Legion.cpp Legion.h LegionUnit.h
	$(CXX) $(CXXFLAGS) -c Legion.cpp -o Legion.o

Infantry.o: Infantry.cpp Infantry.h LegionUnit.h
	$(CXX) $(CXXFLAGS) -c Infantry.cpp -o Infantry.o

Cavalry.o: Cavalry.cpp Cavalry.h LegionUnit.h
	$(CXX) $(CXXFLAGS) -c Cavalry.cpp -o Cavalry.o

Artillery.o: Artillery.cpp Artillery.h LegionUnit.h
	$(CXX) $(CXXFLAGS) -c Artillery.cpp -o Artillery.o

IRiverbank.o: IRiverbank.cpp IRiverbank.h Infantry.h
	$(CXX) $(CXXFLAGS) -c IRiverbank.cpp -o IRiverbank.o

CRiverbank.o: CRiverbank.cpp CRiverbank.h Cavalry.h
	$(CXX) $(CXXFLAGS) -c CRiverbank.cpp -o CRiverbank.o

ARiverbank.o: ARiverbank.cpp ARiverbank.h Artillery.h
	$(CXX) $(CXXFLAGS) -c ARiverbank.cpp -o ARiverbank.o

IOpenField.o: IOpenField.cpp IOpenField.h Infantry.h
	$(CXX) $(CXXFLAGS) -c IOpenField.cpp -o IOpenField.o

COpenField.o: COpenField.cpp COpenField.h Cavalry.h
	$(CXX) $(CXXFLAGS) -c COpenField.cpp -o COpenField.o

AOpenField.o: AOpenField.cpp AOpenField.h Artillery.h
	$(CXX) $(CXXFLAGS) -c AOpenField.cpp -o AOpenField.o

IOWoodland.o: IWoodland.cpp IWoodland.h Infantry.h
	$(CXX) $(CXXFLAGS) -c IWoodland.cpp -o IWoodland.o

CWoodland.o: CWoodland.cpp CWoodland.h Cavalry.h
	$(CXX) $(CXXFLAGS) -c CWoodland.cpp -o CWoodland.o

AWoodland.o: AWoodland.cpp AWoodland.h Artillery.h
	$(CXX) $(CXXFLAGS) -c AWoodland.cpp -o AWoodland.o

RiverbankFactory.o: RiverbankFactory.cpp RiverbankFactory.h
	$(CXX) $(CXXFLAGS) -c RiverbankFactory.cpp -o RiverbankFactory.o

WoodlandFactory.o: WoodlandFactory.cpp WoodlandFactory.h
	$(CXX) $(CXXFLAGS) -c WoodlandFactory.cpp -o WoodlandFactory.o

OpenFieldFactory.o: OpenFieldFactory.cpp OpenFieldFactory.h
	$(CXX) $(CXXFLAGS) -c OpenFieldFactory.cpp -o OpenFieldFactory.o

Flanking.o: Flanking.cpp Flanking.h
	$(CXX) $(CXXFLAGS) -c Flanking.cpp -o Flanking.o

Fortification.o: Fortification.cpp Fortification.h
	$(CXX) $(CXXFLAGS) -c Fortification.cpp -o Fortification.o

Ambush.o: Ambush.cpp Ambush.h
	$(CXX) $(CXXFLAGS) -c Ambush.cpp -o Ambush.o

TacticalCommand.o: TacticalCommand.cpp TacticalCommand.h
	$(CXX) $(CXXFLAGS) -c TacticalCommand.cpp -o TacticalCommand.o

TacticalMemento.o: TacticalMemento.cpp TacticalMemento.h
	$(CXX) $(CXXFLAGS) -c TacticalMemento.cpp -o TacticalMemento.o

TacticalPlanner.o: TacticalPlanner.cpp TacticalPlanner.h
	$(CXX) $(CXXFLAGS) -c TacticalPlanner.cpp -o TacticalPlanner.o

WarArchives.o: WarArchives.cpp WarArchives.h
	$(CXX) $(CXXFLAGS) -c WarArchives.cpp -o WarArchives.o

clean:
	rm -f $(TARGET) $(OBJECTS)

run: $(TARGET)
	./$(TARGET)
