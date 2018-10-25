#include<iostream>
void fisttext(void);
void lasttext(void);
int main()
{
	using namespace std;
	fisttext();
	fisttext();
	lasttext();
	lasttext();
	return 0;
	
}

void fisttext(void)
{
	std::cout << "Three blind mice" << std::endl;
} 

void lasttext(void)
{
	using std::cout;
	cout <<"See how they run" << std::endl;
	
}
