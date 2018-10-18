#include<stdio.h>
int main()
{
	int a=0,b=0,jieguo[200],chushu=0,yushu=-1,i=0;
	scanf("%d/%d",&a,&b);
	if(a>=10&&b>a&&b<100){	
		yushu=a;
		while(i!=200){
			if(yushu*10<b){
				yushu*=10;
				jieguo[i]=0;
				//
				//	printf("%d",jieguo[i]);
				// 
				i++;
				continue;
				

			}
			chushu=yushu*10/b;
			yushu=yushu*10%b;
			jieguo[i]=chushu;
			//	
			//	printf("%d",jieguo[i]);
			//
			i++;	

		}
		for(i=0;i<200;i++){
			if(i==0)printf("0.");
			printf("%d",jieguo[i]);
			if(i==199)printf("\n");
		}
	}
	return 0;
} 
