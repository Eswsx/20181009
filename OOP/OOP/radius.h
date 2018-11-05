#pragma once
#include"GeometricObject.h"

class Circle:public GeometricObject{
	public:
		Circle();
		Circle(double newRedius);
		Circle(double radius, std::string color, bool filled);
		~Circle();
		double getArea();
		double getRadius();
		void setRadius(double radius);
		double getPerimeter();//Բ���ܳ�
		double getDiameter();//Բ��ֱ��

		static int getNumberOfObjects();

	private:
		double radius_;
		static int numberOfObjects;
};



void p();

void printCircle1(Circle c);
void printCircle2(Circle& c);
void printCircle3(Circle* c);

void setCircleArray(Circle* a, int size,double radius);
void printCircleArray(Circle* a, int size);
double getTotalArea(Circle* a, int size);