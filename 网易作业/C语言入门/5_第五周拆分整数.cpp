#include<stdio.h>
int main()
{
	int input=0,jishu=2,jieguo=0;
	scanf("%d",&input);
	if(input>=2 && input<=100000){
		printf("n="); 
		while(jishu<input+1){
			jieguo=input%jishu;
			if(jieguo==0){
				printf("%d",jishu);
				input = input/jishu;
				jishu=1;
				if(jishu<input)printf("x");
			}
			jishu++; 
		}
//		printf("\b ");
	}
	return 0;
	
} 


