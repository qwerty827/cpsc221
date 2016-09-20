#include <iostream>

int globarray[10];

void fill_array(int original, int plus) {
	for (int i=0; i<10; i++) {
		globarray[i] = original + i * plus;
	}
}

int main(void) {
    int origin, skip;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> origin;
    std::cout << "Enter the number you want to increase in: " << std::endl;
    std::cin >> skip;
    fill_array(origin, skip);
	for (int i=0; i<10; i++) {
		std::cout << globarray[i] << std::endl;
	}
}

