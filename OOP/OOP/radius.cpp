#include"radius.h"
#include"define.h"
#include<iostream>

double Circle::getRadius() {
	return radius_;
}

void Circle::setRadius(double radius) {
	radius_ = radius;
}

Circle::Circle() {
	radius_ = 1;
}

Circle::Circle(double newRadius) {
	radius_ = newRadius;
}
double Circle::getArea() {
	return radius_ * radius_ * PI;

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


/*	
	创建对象调用构造函数：有参,无参
	公共属性：public 
	私有属性：private
	声明一个类时类中单词首字母大写
	匿名对象申明：Classname(arguements);
	::域分隔符
	在堆中创建对象：Circle* pCilcle = new Circle( );
	                delete pCircle;
	数据域与函数可按任意顺序声明
	特殊的内建指针 this





*/