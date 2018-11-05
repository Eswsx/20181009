#include"radius.h"
#include"define.h"
#include<iostream>
#include <Windows.h>
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
//****************class Date **********************//
 Date::Date(int newYear, int newMonth, int newDay) {
	 year = newYear;
	 month = newMonth;
	 day = newDay;
 }

 Date::Date() {
 }

 int Date::getYear() {
	 return year;
 }

 void Date::setYear(int newYear) {
	 year = newYear;
 }

//****************class Person*********************//
 Person::Person(int id, int year, int month, int day) {
	 id_ = id;
	 birthDate = new Date(year, month, day);
 }

 Person::Person(Person& person) {
	 id_ = person.id_;
	 Date* p = person.getBirthDay();
	 birthDate = new Date(*p);
 }

 int Person::getId() {
	 return id_;
 }

 Date* Person::getBirthDay() {
	 return birthDate;
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

void  disPlayPerson(Person& person1, Person& person2) {
	std::cout << "\tperson1 id: " << person1.getId() << std::endl;
	std::cout << "\tperson1 birth year: "
		<< person1.getBirthDay() -> getYear() << std::endl;
	std::cout << "\tperson1 id: " << person2.getId() << std::endl;
	std::cout << "\tperson1 birth year: "
		<< person2.getBirthDay() -> getYear() << std::endl;
}

void printCopyConstructor() {
	std::cout << std::endl;
	Person person1(111, 1970, 5, 3);
	Person person2(222, 2000, 11, 8);

	std::cout << "After creating person1 and person2 " << std::endl;
	disPlayPerson(person1, person2);

	person1 = Person(person2);
	
	std::cout << "After creating person2 and person1 " << std::endl;
	disPlayPerson(person1, person2);

	person2.getBirthDay()->setYear(1963);
	std::cout << "\nAfter modifying person2's birthDate" << std::endl;
	disPlayPerson(person1, person2);

	std::cout << "\n" << (person1.getBirthDay() == person2.getBirthDay()) << std::endl << std::endl ;
}

void systemClear() {
	Sleep(CLEARTIME);
	system("clear");
}

void printCustomingCopyConstructor() {
	Person person1(111, 1970, 5, 3);
	Person person2(person1);

	std::cout << "After creating person1 and person2 " << std::endl;
	disPlayPerson(person1, person2);

	person2.getBirthDay()->setYear(1963);

	std::cout << "\nAfter modifying person2's birthDate" << std::endl;
	disPlayPerson(person1, person2);

	std::cout << "\n\nperson1.birthDate == person2.birthDate: " 
		<< (person1.getBirthDay() == person2.getBirthDay()) << std::endl << std::endl;

	Person person3(111, 1970, 5, 3);
	Person person4 = person3;
	std::cout << "Person3.birthDate = " << reinterpret_cast<int>(person3.getBirthDay()) << std::endl;
	std::cout << "Person4.birthDate = " << reinterpret_cast<int>(person4.getBirthDay()) << std::endl;
	//reinterpret_cast<int>C++�����ؼ��֣�ǿ������ת��������ַǿ��ת��Ϊ����
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
	ǳ����������ָ�룬����ָ����ָ������
	���������ָ����ָ������
	c++����Ĭ�ϵķ���������private
*****************************************************/