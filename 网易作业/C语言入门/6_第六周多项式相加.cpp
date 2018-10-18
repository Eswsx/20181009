#include<stdio.h>
#define max 100
#define true 1
#define false 0

int main()
{
	int mici1[max]={0},mici2[max]={0},jieguo[max]={0};
	int mi1=0,xi1=0,mi2=0,xi2=0;
	int i;
	scanf("%d %d",&mi1,&xi1);
	while(true){
		mici1[mi1]=xi1;
		if(mi1==0)break;
		scanf("%d %d",&mi1,&xi1);
	}
	scanf("%d %d",&mi2,&xi2);
	while(true){
		mici2[mi2]=xi2;
		if(mi2==0)break;
		scanf("%d %d",&mi2,&xi2);
	}
	for(i=0;i<max;i++){
		jieguo[i]=mici1[i]+mici2[i];
	}
	for(i=max-1;i>-1;i--){
		if(jieguo[i]==0)continue; 
		printf("%d",jieguo[i]);
		if(i==0)continue;
		printf("x");
		printf("%d",i);
		printf("+");
	}
	return 0;
} 
