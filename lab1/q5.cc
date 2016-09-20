#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

void is_Equal(int a, int b);

int main() {
	int i, secreti;
	srand (time(NULL));
	secreti = rand()%10 + 1;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> i;
	is_Equal (i, secreti);
	return 0;
}

void is_Equal(int a, int b) {
	if (a == b) {
	std::cout << "Congratulations!" << std::endl;
	}else {
	std::cout << "Sorry, try again" << std::endl;
	std::cout << "Enter a number: " << std::endl;
	std::cin >> a;
	is_Equal(a, b);
	}
}
