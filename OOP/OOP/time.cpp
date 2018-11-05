#include"time.h"
#include<iostream>
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
void p() {
	Date date;
	date.year = 2000;//友元函数能直接访问私有数据成员
	std::cout << std::endl << date.year << std::endl;
}
void  disPlayPerson(Person& person1, Person& person2) {
	std::cout << "\tperson1 id: " << person1.getId() << std::endl;
	std::cout << "\tperson1 birth year: "
		<< person1.getBirthDay()->getYear() << std::endl;
	std::cout << "\tperson1 id: " << person2.getId() << std::endl;
	std::cout << "\tperson1 birth year: "
		<< person2.getBirthDay()->getYear() << std::endl;
}