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
//********************************//
void printCircle1(Circle c);
void printCircle2(Circle &c);
void printCircle3(Circle* c);