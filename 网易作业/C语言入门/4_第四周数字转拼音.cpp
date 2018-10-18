#include<stdio.h>
int main()
{
	int number=0,gewei=0,yushu=0,jjshu=0,shuchu=0;
	scanf("%d",&number);
	if(number>=-100000 && number<=100000){
		if(number<0){
			number=0-number;
			printf("fu");
			while(yushu!=0){
				gewei=number%10;
				yushu=number/10;
				if(gewei==0 && jjshu==0)continue;
				jjshu=jjshu*10 + gewei;		
			}
			while(jjshu!=0){
				shuchu=jjshu%10;
				printf(" ");
				switch(shuchu){ 
					case 1:printf("yi");break;
					case 2:printf("er");break;
					case 3:printf("san");break;
					case 4:printf("si");break;
					case 5:printf("wu");break;
					case 6:printf("liu");break;
					case 7:printf("qi");break;
					case 8:printf("ba");break;
					case 9:printf("jiu");break;
					case 0:printf("lin");break;
				} 
			}
					
		}
		if(number==0)printf("lin");
		if(number>0){
			
		}	
			
			
		}
		
		
		
		return 0;
	}
