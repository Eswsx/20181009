#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,k=0,set=0,lengths2=0;
	char s1[80]={0},s2[80]={0},zj[80]={0};
	scanf("%s",s1);
	scanf("%s",s2);
	while(s2[i]!='\0'){
//		printf("%c",s2[i]);
		i++;
	}
	lengths2=i;
	i=0;
	while(s1[i]!='\0'){
		if(s1[i]==s2[0]){
//			for(j=0;j<lengths2;j++){
//				zj[j]=s1[j+i]; 
//			}
//			zj[j]='\0';
			if(strcmp(zj,s2)==0){
				for(j=0;j<lengths2;j++){
					s1[j+i]=' ';
				}
			}
		}		
		i++;
	}
	i=0;
	j=0;
	while(s1[i]!='\0'){
		if(s1[i]==' '){
			i++;
			continue;
		}
		zj[j]=s1[i];
		i++;
		j++;
	}
	printf("%s",zj);
	return 0;
}
