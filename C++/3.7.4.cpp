#include<iostream>
int main()
{
	using namespace std;
	cout << "Enter the number of seconds : ";
	long long second;
	cin >> second;
	int days,hours,minutes,seconds;
	long long remain_time1,remain_time2,remain_time3;
	days = second/60/60/24;
	remain_time1 = second - days*60*60*24;
	hours = remain_time1/60/60;
	remain_time2 = second - days*60*60*24 - hours*60*60; 
	minutes = remain_time2/60;
	remain_time3 = second - days*60*60*24 - hours*60*60 - minutes*60;
	seconds =remain_time3;
	cout << endl << second << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, "
	<< seconds << " seconds. ";
	return 0;
	
} 
