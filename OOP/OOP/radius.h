#pragma once

class Circle{
	public:
		Circle();
		Circle(double newRedius);
		double getArea();
		double getRadius();
		void setRadius(double radius);

	private:
		double radius_;
};

void printFunctionCall();
void printCircle1(Circle c);
void printCircle2(Circle& c);
void printCircle3(Circle* c);

void setCircleArray(Circle* a, int size,double radius);
void printCircleArray(Circle* a, int size);
double getTotalArea(Circle* a, int size);
void printCreateAnArrayOfObjects();