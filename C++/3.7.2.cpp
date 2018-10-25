#include<iostream>
int main()
{
	using namespace std;
	
	cout << "Please enter your height." << endl;
	cout << "Your foot : ";
	int foot;
	cin >> foot;
	cout << endl <<"Your inch : ";
	int inch;
	cin >> inch;
	cout << endl << "Please enter your weight." << endl;
	cout << "Please enter your pound : ";
	int pound;
	cin >> pound;
	float kilogram,meter;
	meter = (foot * 12 + inch) * 0.0254;
	kilogram = pound / 2.2;
	float bmi;
	bmi = kilogram / (meter*meter);
	cout << "Your BMI is : " << bmi << " . ";
	return 0;
	
	 
	
}
