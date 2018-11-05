#pragma once
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
public:
	friend void p();
	friend class AccessDate;

	Date(int newYear, int nemMonth, int newDay);
	Date();

	int getYear();
	void setYear(int newYear);
private:
	int year;
	int month;
	int day;
};

class AccessDate {
public:
	static void q();
};

class Person {
public:
	Person(int id, int year, int month, int day);
	Person(Person &);
	int getId();
	Date* getBirthDay();
private:
	int id_;
	Date* birthDate;
};

void  disPlayPerson(Person& person1, Person& person2);
