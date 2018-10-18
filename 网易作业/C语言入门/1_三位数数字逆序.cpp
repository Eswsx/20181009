#include<stdio.h>
int main()
{
	int number=0,a=0,b=0,c=0;
	scanf("%d",&number);
	a = number/100;
	b = (number-1*100)/10;
	c = number-a*100-b*10;
	if(c==0)
	{
		if(b==0)printf("%d",a);
		else printf("%d",a+b*10);
	}
	else printf("%d",a+b*10+c*100);
	return 1;
	
}
