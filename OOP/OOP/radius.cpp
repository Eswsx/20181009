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
	����������ù��캯�����в�,�޲�
	�������ԣ�public 
	˽�����ԣ�private
	����һ����ʱ���е�������ĸ��д
	��������������Classname(arguements);
	::��ָ���
	�ڶ��д�������Circle* pCilcle = new Circle( );
	                delete pCircle;
	�������뺯���ɰ�����˳������
	������ڽ�ָ�� this





*/