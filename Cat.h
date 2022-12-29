#pragma once
#include <iostream>
#include "Character.h"
using namespace std;

class Cat : public Character {

public:
	Cat() : Character() {}
	Cat(string n, int r, int j) : Character(n, r, j) {}
};