// Polymorphism.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
using namespace std;

class C {
public:
	virtual string toString() {//虚函数
		return "Class C";
	}
};
class B :public C {
	string toString() {
		return "Class B";
	}
};
class A :public B {
	string toString() {
		return "Class A";
	}
};
void displayObject(C *p) {
	cout << p -> toString().data() << endl;
}

int main()
{
	A a = A();
	B b = B();
	C c = C();
	displayObject(&a);
	displayObject(&b);
	displayObject(&c);
	return 0;
}

//如何使得函数能够实现动态联编:
//	基类同名虚函数
//	访问对象的成员函数时，要用指向对象的指针或对象引用