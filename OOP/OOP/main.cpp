// OOP.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>
#include"radius.h"
#include"define.h"
#include"GeometricObject.h"
#include"Allprint.h"
#include"Other.h"

int main()
{
	//using namespace std;
	printFunctionCall();//函数调用函数的三种方法
	printCreateAnArrayOfObjects();//创建对象数组
	printConstrutorInitializer();//构造函数的初始化
	printStaticFunction();//静态变量与静态函数
	printDestructors();//析构函数
	printFriendFunctionAndClasses();//友元函数与友元类
	printCopyConstructor();//拷贝构造函数//浅拷贝
	systemClear();
	printCustomingCopyConstructor();//定制拷贝函数//深拷贝
	printVectorClass();//vector对象

	printInheritance();//继承
	test(); //子函数调用父函数中的函数

	return 0;
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
	vector对象容量可自动增大

	vector<dateType>:
		+vector<dateType>()
		+push_back(element:dateType):void
		+pop_back():void
		+size():unsigned int
		+at(index:int):dateType
		+empty():bool
		+clear():void
		+swap(v2:vector):void

	函数重定义后调用基类函数只能用circle.GeometicObject::toString()形式调用toString()
*******************************************************/