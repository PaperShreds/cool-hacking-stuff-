#include <windows.h>
#include <iostream>
#include <random>

int random_num(int min, int max)
{
	std::mt19937 gen{ std::random_device{}() };
	return std::uniform_int_distribution{ min, max }(gen);
}

int main() {

	char color;

	std::cout << "Select a color - R/G/B then press enter \n \n";

	std::cin >> color;

	switch (color) {
	case 'r':
		system("color 4");
		break;
	case 'g':
		system("color 2");
		break;
	case 'b':
		system("color 9");
		break;
	}

	while (true)
		std::cout << random_num(0, 9);
}