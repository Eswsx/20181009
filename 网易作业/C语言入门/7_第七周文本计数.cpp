#include<stdio.h>
int main()
{
	char wenben[100]; 
	int jishu[100];
	int i=0,ji=0,j=0;
	scanf("%s",wenben);
	while(wenben[i]!='.'){
		if(wenben[i]=='\0'){			
			jishu[j]=i;
			j++;
			i=-1;
			scanf("%s",wenben);
		}
		i++;
		if(wenben[i]=='.'){
			while(wenben[ji]!='.'){
				ji++;
			}
			jishu[j]=ji;
			j++;
		}
	}
	for(i=0;i<j;i++){
		printf("%d",jishu[i]);
		if(i!=j-1)printf(" ");
	}
	
	

	return 0;
} 
