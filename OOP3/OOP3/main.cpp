// OOP3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"GeometricObject.h"
#include"Circle.h"
#include"Rectangle.h"

bool equalArea(GeometricObject &object1, GeometricObject &object2) {
	return object1.getArea() == object2.getArea();
}

void displayGeometricObject(GeometricObject &object) {
	cout << "The area is " << object.getArea() << endl;
	cout << "The perimeter is " << object.getPerimeter() << endl;
	
	GeometricObject *p = &object;
	Circle *p1 = dynamic_cast<Circle*>(p);
	Rectangle* p2 = dynamic_cast<Rectangle*>(p);
	//上转可不适用dynamic_cast而隐式转换
	//GeometricObject* g = new Circle(1);
	//Circle *c = newCircle(2);
	//g = c;
	//下转必须显式执行
	//c = dynamic_cast<Circle *>(g);

	if (p1 != 0) {
		cout << "The radius is " << p1->getRadius() << endl;
		cout << "The diameter is " << p1->getDiameter() << endl;
	}

	if (p2 != 0) {
		cout << "The width is " << p2->getWidth() << endl;
		cout << "The height is " << p2->getHeight() << endl;
	}
}

int main()
{
	Circle circle(5);
	Rectangle rectangle(5, 3);

	cout << "Circle info: " << endl;
	displayGeometricObject(circle);

	cout << "\nRectangle info: " << endl;
	displayGeometricObject(rectangle);

	cout << "\nThe two objects have the same area ?" << endl <<
		(equalArea(circle, rectangle) ? "Yes" : "No") << endl;

	//tupeid运算符
	string x;
	cout << endl << typeid(x).name() << endl;
	return 0;

}

