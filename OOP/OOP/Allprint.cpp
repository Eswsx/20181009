#include"Allprint.h"
#include<iostream>
#include"radius.h"
#include<vector>
#include<string>
#include"time.h"
#include"rectangle.h"
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

void printCreateAnArrayOfObjects() {
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
void printFriendFunctionAndClasses() {
	p();
	AccessDate::q();
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

	std::cout << "\n" << (person1.getBirthDay() == person2.getBirthDay()) << std::endl << std::endl;
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

void printVectorClass() {
	std::cout << std::endl << std::endl;
	std::vector<int> intVector;

	for (int i = 0; i < 10; i++)
		intVector.push_back(i + 1);

	std::cout << "Number in the vector: ";
	for (unsigned int i = 0; i < intVector.size(); i++)
		std::cout << intVector[i] << " ";

	std::vector<std::string> stringVector;

	stringVector.push_back("Guo-Jing");
	stringVector.push_back("Yang-Guo");
	stringVector.push_back("Zahng-Wuji");
	stringVector.push_back("Duan-Yu");

	std::cout << "\nString in the strin vecor: ";
	for (unsigned int i = 0; i < stringVector.size(); i++)
		std::cout << stringVector[i] << " ";

	stringVector.pop_back();

	std::vector<std::string> v2;
	v2.swap(stringVector);
	v2[0] = "Wei-Xiaobao";

	std::cout << "\nString in the vector v2: ";
	for (unsigned int i = 0; i < v2.size(); i++)
		std::cout << v2.at(i) << " ";
	std::cout << std::endl << std::endl;
}

void printInheritance() {
	cout << endl << endl;
	GeometricObject shape;
	shape.setColor("red");
	shape.setFilled(true);
	cout << shape.toString() << endl << endl;
	
	Circle circle(5);
	circle.setColor("black");
	circle.setFilled(false);
	cout << circle.toString() << endl;
	cout << "  Circle radius: " << circle.getRadius()
		<< "  area: " << circle.getArea()
		<< "  perimeter: " << circle.getPerimeter()
		<< "\n" << endl;

	Rectangle rectangle(2, 3);
	rectangle.setColor("orange");
	rectangle.setFilled(true);
	cout << rectangle.toString() << endl;
	cout << "  Rectangle width: " << rectangle.getWidth()
		<< "  height: " << rectangle.getHeight()
		<< "  area: " << rectangle.getArea()
		<< "  perimeter: " << rectangle.getPerimeter()
		<< "\n" << endl;
}

void test() {
	cout << endl << endl;
	Rectangle a(12, 13, "red", true);
	cout << a.toString() << endl;
	cout << "  a width: " << a.getWidth()
		<< "  height: " << a.getHeight()
		<< "  area: " << a.getArea()
		<< "  perimeter: " << a.getPerimeter()
		<< "\n" << endl;
	//GeometricObject::setColor(color);
	//GeometricObject::setFilled(filled);
	//子函数调用父函数中的函数调用方法
}