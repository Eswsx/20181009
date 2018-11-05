#include"radius.h"
#include"define.h"
#include<iostream>
#include <Windows.h>
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
	printCircle1(circle1);//值传递
	printCircle2(circle1);//引用传递
	printCircle3(&circle1);//指针传递
}

void printCreateAnArrayOfObjects(){
	const int SIZE = 10;
	double radius10;
	Circle circleArray[SIZE];//创建对象数组
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
	date.year = 2000;//友元函数能直接访问私有数据成员
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
	//reinterpret_cast<int>C++保留关键字，强制类型转换，将地址强制转化为整型
}

/**************************************************
	创建对象调用构造函数：有参,无参
	公共属性：public 
	私有属性：private
	声明一个类时类中单词首字母大写
	匿名对象申明：Classname(arguements);
	::域分隔符
	在堆中创建对象：Circle* pCilcle = new Circle( );
	                delete pCircle;
	数据域与函数可按任意顺序声明
	特殊的内建指针 this->
	若类的数据域是一个对象类型则需要初始化列表
	不可变类与不可变对象：没有更改器函数，所有数据域
	为私有，没有能够返回数据域对象的引用或指针的访问器
	静态成员初始化的唯一方式，只能放在所有函数外进行初始化
	析构函数不能有参数,只能定义一个
	浅拷贝：拷贝指针，而非指针所指的内容
	深拷贝：拷贝指针所指的内容
	c++里类默认的访问属性是private
*****************************************************/