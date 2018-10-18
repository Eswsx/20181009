#include<iostream>
int swap(int& a,int& b,int& c);
int swap(int* a,int* b,int* c);
int main(){
	using namespace std; 
	int a=0,b=0,c=0,max=0;
	cin >> a;
	cin >> b;
	cin >> c;
	max = swap(a,b,c);
	max = swap(&a,&b,&c);
	cout << max <<" "<< a <<" "<<b<<" "<<c<< endl;
	return 0;
} 

int swap(int& a,int& b,int& c){
	int temp=0,max=0;
	temp=c;
	c=b;
	b=a;
	a=temp;
	max=a;
	if(b>max)max=b;
	if(c>max)max=c;
	return max;
}
int swap(int* a,int* b,int* c){
	int temp=0,max=0;
	temp=*c;
	*c=*b;
	*b=*a;
	*a=temp;
	max=*a;
	if(*b>max)max=*b;
	if(*c>max)max=*c;
	return max;
}
