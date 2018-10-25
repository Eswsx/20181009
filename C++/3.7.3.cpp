#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter a latitude in degrees,minutes,and seconds £º"<< endl; 
	cout << "First,enter the degrees :";
	int degrees;
	cin >> degrees;
	cout << endl << "Next,enter the minutes of arc : ";
	int minutes;
	cin >> minutes;
	cout << endl << "Finally,enter the seconds of arc : ";
	int seconds;
	cin >> seconds;
	float result;
	result = float (degrees) + float(minutes)/60 + float(seconds)/60/60;
	cout << endl << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << result <<" degrees.";
	return 0;
	
}
