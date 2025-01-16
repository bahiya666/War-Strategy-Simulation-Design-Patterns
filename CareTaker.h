#include <exception>
#include <vector>
using namespace std;

#ifndef __CareTaker_h__
#define __CareTaker_h__

// #include "memento1:Memento.h"

class memento1:Memento;
class CareTaker;

class CareTaker
{
	private: std::vector<memento1:Memento*> _mementoList;

	public: void addMemento(memento1:Memento* aM);

	public: memento1:Memento* getMemento(int aIndex);

	public: void _CareTaker();
};

#endif
