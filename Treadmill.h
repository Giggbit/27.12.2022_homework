#pragma once
#include <iostream>
#include "Let.h"
using namespace std;

class Treadmill : public Let {

public:
	Treadmill() : Let() {}
	Treadmill(int l) : Let(0, l) {}
};