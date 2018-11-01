#include"radius.h"
#include"define.h"
#include<iostream>
//***********************************//
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

//*********************************************//

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

void printFunctionCall() {
	double radius;
	std::cout << "Enter the radius of the circle :";
	std::cin >> radius;
	std::cout << std::endl;
	Circle circle1(radius);
	printCircle1(circle1);//ֵ����
	printCircle2(circle1);//���ô���
	printCircle3(&circle1);//ָ�봫��
}

void printCreateAnArrayOfObjects(){
	const int SIZE = 10;
	double radius10;
	Circle circleArray[SIZE];//������������
	std::cout << "Enter the radius of the circle :";
	std::cin >> radius10;
	setCircleArray(circleArray, SIZE, radius10);
	std::cout << "The radius of the circle has: ";
	printCircleArray(circleArray, SIZE);
	std::cout << std::endl;
	std::cout << "The total area of these circles is:" << getTotalArea(circleArray, SIZE) << std::endl;

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