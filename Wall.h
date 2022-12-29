#pragma once
#include <iostream>
#include "Let.h"
using namespace std;

class Wall : public Let {

public:
	Wall() : Let() {}
	Wall(int h) : Let(h, 0) {}
};