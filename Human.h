#pragma once
#include <iostream>
#include "Character.h"
using namespace std;

class Human : public Character {

public:
	Human() : Character(){}
	Human(string n, int r, int j) : Character(n, r, j){}
};

