#include<iostream>
#include"screen.h"

int main() {
	int width, hight;
	std::cin >> width >> hight;
	Screen screen1(width, hight);
	Screen screen2;

	screen2.setWidth(800);
	screen2.setHight(600);

	std::cout << screen1.getWidth() << " " << screen1.getHight() << std::endl;
	std::cout << screen2.getWidth() << " " << screen2.getHight();

#ifdef DEBUG




std::cin.get();
#endif
		return 0;

}