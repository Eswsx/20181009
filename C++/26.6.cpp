#include<iostream>
double convert(double);
int main()
{
	using namespace std;
	double light_year,astronomical;
	cout << "Enter the number of light years:";
	cin >> light_year;
	cout << endl;
	astronomical = convert(light_year);
	cout << light_year << " light year = " << astronomical << " astronomical units" << endl;
	return 0;
}

double convert(double n)
{
	n = n * 63240;
	return n;
	
}
