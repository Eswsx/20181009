#include<stdio.h>
int main()
{
	int number=0,jieg=0,a=0,b=0,c=0;
	float d=0.5;
	scanf("%d",&number);
	while(number>0){
		b=number%10;
		c++;
		d*=2; 
		if((b%2!=0 && c%2!=0)||(b%2==0 && c%2==0)){
		jieg+=d;
		} 
		number=number/10;
	}
	printf("%d",jieg);
	return 0;
}
