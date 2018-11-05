#include"radius.h"
#include"define.h"
#include<iostream>
//*************class Circle****************//
int Circle::numberOfObjects = 1;//静态成员初始化的唯一方式，只能放在所有函数外进行初始化 //一应为零

int Circle::getNumberOfObjects() {
	return numberOfObjects;
}

double Circle::getRadius() {
	return radius_;
}

void Circle::setRadius(double radius) {
	radius_ = (radius >= 0) ? radius : 0;//判断半径是否大于零
}

Circle::Circle() {
	radius_ = 1;
	numberOfObjects++;
}

Circle::Circle(double newRadius) {
	radius_ = newRadius;
	numberOfObjects++;
}

Circle::Circle(double radius, string color, bool filled) {
	radius_ = radius;
	numberOfObjects++;
}

Circle::~Circle() {
	numberOfObjects--;
}


double Circle::getArea() {
	return radius_ * radius_ * PI;
}

double Circle::getPerimeter() {
	return 2 * radius_ * PI;
}

double Circle::getDiameter() {
	return 2 * radius_;
}


void printCircle1(Circle c) {
	std::cout << "The radius of the circle is "
		 << c.getRadius() << ".So the area is "
		 << c.getArea() << ".";
	std::cout << std::endl;
}

void printCircle2(Circle &c) {
	std::cout << "The radius of the circle is "
		<< c.getRadius() << ".So the area is "
		<< c.getArea() << ".";
	std::cout << std::endl;
}

void printCircle3(Circle* c) {
	std::cout << "The radius of the circle is "
		<< c -> getRadius() << ".So the area is "
		<< c -> getArea() << ".";
	std::cout << std::endl;
}
//**************************************************//
void setCircleArray(Circle* a, int size,double radius) {
	for (int i = 0; i < size; i++) {
		a[i].setRadius(i + radius);
	}
}

void printCircleArray(Circle* a, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << a[i].getRadius() << " ";
	}
}

double getTotalArea(Circle* a, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += a[i].getArea();
	}
	return sum;
}