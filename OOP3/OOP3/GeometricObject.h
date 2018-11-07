#pragma once
#include<string>
using namespace std;

class GeometricObject {
protected:
	GeometricObject();
	GeometricObject(string color, bool filled);

public:
	string getColor();
	void setColor(string color);
	bool isFilled();
	void setFilled(bool filled);
	string toString();
	virtual double getArea() = 0;//virtual �� = 0 Ϊ���麯��
	virtual double getPerimeter() = 0;

private:
	string color_;
	bool filled_;
};