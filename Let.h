#pragma once
#include <iostream>
using namespace std;

class Let {
protected:
	int height;
	int length;

public:
	Let() {
		height = 0;
		length = 0;
	}
	Let(int h, int l) {
		height = h;
		length = l;
	}	 
};
