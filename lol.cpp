#include <windows.h>
#include <iostream>

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
			while(true){
				system("help");
				system("tree c:\\users\\");
				system("help");
				system("help");
				system("help");
			}
}