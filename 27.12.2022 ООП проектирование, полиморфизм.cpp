#include "libraries.h"
using namespace std;

const int max_size = 10;

int main() {
	srand(time(0));

	Character ch_mas[max_size] = {
		ch_mas[0] = Human("Grisha", 5, 3),
		ch_mas[1] = Cat("Murka", 6, 6),
		ch_mas[3] = Robot("R2-D2", 2, 8)
	};
	
	int min = 1, max = 10;
	int rand_num = min + rand() % (max - min + 1);
	Let let_mas[] = {
		let_mas[0] = Wall(rand_num),
		let_mas[1] = Treadmill(rand_num / rand() % 10)
	};

	for (int i = 0; i < max_size; i++) {
		for (int j = 0; j < 2; j++) {
			
		}
	}

}
