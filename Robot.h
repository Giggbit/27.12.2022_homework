#pragma once
#include <iostream>
#include "Character.h"
using namespace std;

class Robot : public Character {

public:
	Robot() : Character() {}
	Robot(string n, int r, int j) : Character(n, r, j) {}
};
