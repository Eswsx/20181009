#include<iostream>
#define ZERO 0
#include<climits>
int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollers deposited." << endl
	<<  "Add $1 to each accout." << endl << "Now";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollers and Sue has " << sue;
	cout << " doller despsited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollers and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << " Take $1 form each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	return 0;
	 
}
