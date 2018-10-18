#include<stdio.h>
int main(){
	int bjt=0,utc=0,hour=0;
	scanf("%d",&bjt);
	int hour1=0,hour2=0,min1=0,min2=0;
	if(bjt>=0 && bjt<=2359){
		hour1=bjt/1000;
		hour2=(bjt-hour1*1000)/100;
		min1=(bjt-hour1*1000-hour2*100)/10;
		min2=bjt%10;
		if(hour1==0){
			if(hour2==0){
				if(min1==0){
					if(min2==0){
						hour=8;
						printf("%d",hour*100);
					}
					else{
						hour=8;
						printf("%d",hour*100+min2);	
					}
				}
				else{
					hour=8;
					printf("%d",hour*100+min1*10+min2);
				}
			}
			else{
				hour=hour2+8;
				printf("%d",hour*100+min1*10+min2);
			}
		}
		else{
			hour=(hour1*10+hour2)+8;
			if(hour>23)printf("%d",hour%24*100+min1*10+min2);
			else printf("%d",hour*100+min1*10+min2);
		}
	
	}
	return 0;
	
}
