#include<iostream>
int time(int,int);
int main()
{
	using namespace std;
	cout << "Enter number of hours: ";
	int hours;
	cin >> hours;
	cout << endl;
	cout << "Enter number of minutes: ";
	int minutes;
	cin >> minutes;
	cout << endl;
	time(hours,minutes);
	return 0;
}


int time(int n,int m)
{
	std::cout << "Time: " << n << ":" << m << std::endl;
}
