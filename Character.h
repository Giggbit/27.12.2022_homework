#pragma once
#include <iostream>
using namespace std;

class Character {
protected:
	string name;
	int run;
	int jump;

public:
	Character() {
		name = nullptr; 
		run = 0;
		jump = 0;
	}
	Character(string n, int r, int j) {
		name = n;
		run = r;
		jump = j;
	}

	void Run() {
		cout << name << " is runing" << endl;
	}
	void Jump() {
		cout << name << " is jumping" << endl;
	}

	void Print() {
		cout << "name: " << name << endl;
		cout << "run: " << run << endl;
		cout << "jump: " << jump << endl;
	}
};



