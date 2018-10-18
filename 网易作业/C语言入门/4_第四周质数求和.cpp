#include<stdio.h>
#define ture 1
#define false 0
int main()
{
	int i=0,n=0,m=0,sum=0,js=1,zhisu=0,zsbm=0;
	scanf("%d %d",&n,&m);
	while(true){
		for(i=1;i<=js;i++){
			if(i==1)continue;
			if(js%i==0 && i!=js)break;
			if(i==js){
				zhisu = js;
				zsbm++;
			}
		}
		if(zsbm>=n && zsbm<=m){
			sum+=zhisu;
			zhisu =0;
		}
		if(zsbm>200)break;
		js++;
		
			
			
	}
	printf("%d",sum);
	return 0;
	
}
 
