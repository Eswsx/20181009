#include<iostream>
double convert(double);
int main()
{
	using namespace std;
	int sheshi,huashi;
	cout << "Please enter a Celsius value:";
	cin >> sheshi;
	cout << endl;
	huashi = convert(sheshi);
	cout << sheshi <<" degrees is " << huashi << " degrees Fahrenheit." << endl;
	return 0;
	
}

double convert(double n)
{
	n = 1.8 * n + 32.0;
	return n;
}
