#include<stdio.h>
int main()
{
	int n=0,i=0,j=0,k=0,jud=0,max=0,min=0,biao1=0,biao2=0,zhong=0;
	scanf("%d",&n);
	if(n>=1 && n<100){
		int ju[n][n];
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&ju[i][j]);
			}
		}
		for(i=0;i<n;i++){
			for(j=1;j<n;j++){
				if(ju[i][j-1]>ju[i][j]){
					zhong=ju[i][j-1];
					if(zhong>max){
						max=zhong;
						biao1=j-1;
						biao2=i;
					}
					
				} 

			}
			for(k=0;k<n;k++){
				if(ju[k][biao1]<max){
					jud=1;
				}
				
			}
			max=0;
			if(jud==0){
				printf("%d %d",biao2,biao1);
				break;
			}
			jud=0;
			if(i==n-1)printf("No");
			
			
				
		}
			
			
			
			
	}
	
	
} 
