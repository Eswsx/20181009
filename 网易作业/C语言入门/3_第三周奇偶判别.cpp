#include<stdio.h>
int main()
{
	int number=0,j=0,o=0,m=0;
	scanf("%d",&number);
	if(number>0 && number<100000){
		while(number != -1){
			m = number%2;
			if(m==0)o++;
			else j++;
	//		printf("%d %d",j,o);
			scanf("%d",&number);
		}
	}
	printf("%d %d",j,o);
} 
