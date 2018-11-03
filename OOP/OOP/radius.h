#pragma once

class Circle{
	public:
		Circle();
		Circle(double newRedius);
		~Circle();
		double getArea();
		double getRadius();
		void setRadius(double radius);

		static int getNumberOfObjects();

	private:
		double radius_;
		static int numberOfObjects;
};

class Time {
	public:
		Time(int hour, int minute, int second);
	private:
		int hour, minute, second;
};

class Action {
	public:
		Action(int hour, int minute, int second);
	private:
		Time time;
};

class Date {
	friend void p();
	friend class AccessDate;
private:
	int year;
	int month;
	int day;
};

class AccessDate {
public:
	static void q();
};

void p();

void printCircle1(Circle c);
void printCircle2(Circle& c);
void printCircle3(Circle* c);

void setCircleArray(Circle* a, int size,double radius);
void printCircleArray(Circle* a, int size);
double getTotalArea(Circle* a, int size);

void printFunctionCall();
void printCreateAnArrayOfObjects();
void printConstrutorInitializer();
void printStaticFunction();
void printDestructors();
void printFriendFunctionAndClasses();
void printCopyConstructor();