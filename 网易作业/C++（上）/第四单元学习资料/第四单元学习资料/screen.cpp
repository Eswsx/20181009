#include"screen.h"
	void Screen::setWidth(int width) {
	this->width = width;
}

	void Screen::setHight(int hight) {
	this->hight = hight;
}

int Screen::getWidth() {
	return width;
}

int Screen::getHight() {
	return hight;
}

Screen::Screen(int width, int hight) {
	setWidth(width);
	setHight(hight);
}

Screen::Screen() {

}



