#include<stdio.h> 
int jud(int number);

int main()
{
	int n=0,m=0,i=0,jieguo=0,kaiguan=0;
	scanf("%d %d",&n,&m);
	if(n>=1 && m>n && m<1000){
		i=n;
		while(i<=m){
			jieguo=jud(i);
			if(jieguo!=0){
				printf("%d",i);
				if(i<m)printf(" "); 
				kaiguan=1;
			}
			jieguo=0;	 		
			i++;
		}
		if(kaiguan==0)printf(" ");
	}
	return 0;
} 

int jud(int number){
	int i1=1,jieguo=0,sum=0,a1=0;
	while(i1<number){
		jieguo=number%i1;
		if(jieguo==0){
			sum+=i1;
		}	
		i1++;
	}
	if(sum==number)a1=1;
	return a1;

	
}
