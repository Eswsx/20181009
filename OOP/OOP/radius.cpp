#include"radius.h"
#include"define.h"
#include<iostream>
//*************class Circle****************//
int Circle::numberOfObjects = 1;//��̬��Ա��ʼ����Ψһ��ʽ��ֻ�ܷ������к�������г�ʼ�� //һӦΪ��

int Circle::getNumberOfObjects() {
	return numberOfObjects;
}

double Circle::getRadius() {
	return radius_;
}

void Circle::setRadius(double radius) {
	radius_ = (radius >= 0) ? radius : 0;//�жϰ뾶�Ƿ������
}

Circle::Circle() {
	radius_ = 1;
	numberOfObjects++;
}

Circle::Circle(double newRadius) {
	radius_ = newRadius;
	numberOfObjects++;
}


Circle::~Circle() {
	numberOfObjects--;
}


double Circle::getArea() {
	return radius_ * radius_ * PI;

}

//***************class Time*********************//

Time::Time(int hour, int minute, int second) {};

//***************class Action*******************//

Action::Action(int hour, int minute, int second) :time(hour, minute, second) {
	time = Time(hour, minute, second);
}

//***************class AccessDate*******************//
 void AccessDate::q() {
	 Date birthDate;
	 birthDate.year = 2000;
	 std::cout << birthDate.year;
}
//********************************************//
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
	std::cout << "The total area of these circles is:" 
		      << getTotalArea(circleArray, SIZE) << std::endl << std::endl;

}

void printConstrutorInitializer() {

}

void printStaticFunction() {
	std::cout << "StaticFunction:" << std::endl;
	std::cout << "Number of circle objects created: "
		<< Circle::getNumberOfObjects() << std::endl;

	Circle circle1;
	std::cout << "The area of the circle of radius "
		<< circle1.getRadius() << " is " << circle1.getArea() << std::endl;
	std::cout << "Number of circle objects created: "
		<< Circle::getNumberOfObjects() << std::endl;

	Circle circle2(5.0);
	std::cout << "The area of the circle of radius "
		<< circle1.getRadius() << " is " << circle2.getArea() << std::endl;
	std::cout << "Number of circle objects created: "
		<< Circle::getNumberOfObjects() << std::endl;

	Circle circle3(3.3);
	std::cout << "The area of the circle of radius "
		<< circle1.getRadius() << " is " << circle3.getArea() << std::endl;
	std::cout << "Number of circle objects created: "
		<< Circle::getNumberOfObjects() << std::endl;

	std::cout << "circle1.getNumberOfObjects() returns "
		<< circle1.getNumberOfObjects() << std::endl;
	std::cout << "circle2.getNumberOfObjects() returns "
		<< circle2.getNumberOfObjects() << std::endl;
		
}
void printDestructors() {
	Circle* pCircle1 = new Circle();
	Circle* pCircle2 = new Circle();
	Circle* pCircle3 = new Circle();
	std::cout << "Number of circle objects created: "
		<< Circle::getNumberOfObjects() << std::endl;

	delete pCircle1;

	std::cout << "Number of circle objects created: "
		<< Circle::getNumberOfObjects() << std::endl;
	delete pCircle2;
	delete pCircle3;
	std::cout << "Number of circle objects created: "
		<< Circle::getNumberOfObjects() << std::endl;
}

void p() {
	Date date;
	date.year = 2000;//��Ԫ������ֱ�ӷ���˽�����ݳ�Ա
	std::cout << std::endl << date.year << std::endl;
}



void printFriendFunctionAndClasses() {
	p();
	AccessDate::q();
}

void printCopyConstructor() {

}


/**************************************************
	����������ù��캯�����в�,�޲�
	�������ԣ�public 
	˽�����ԣ�private
	����һ����ʱ���е�������ĸ��д
	��������������Classname(arguements);
	::��ָ���
	�ڶ��д�������Circle* pCilcle = new Circle( );
	                delete pCircle;
	�������뺯���ɰ�����˳������
	������ڽ�ָ�� this->
	�������������һ��������������Ҫ��ʼ���б�
	���ɱ����벻�ɱ����û�и���������������������
	Ϊ˽�У�û���ܹ������������������û�ָ��ķ�����
	��̬��Ա��ʼ����Ψһ��ʽ��ֻ�ܷ������к�������г�ʼ��
	�������������в���,ֻ�ܶ���һ��

*****************************************************/