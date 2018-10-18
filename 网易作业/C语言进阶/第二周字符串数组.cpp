#include<stdio.h>

//定义字符串数组必须用const 

int main()
{
	int number=0;
	const char *R[]={"Unreadable",
		"Barely readable,occasional words distinguishable",
		"Readable with considerable difficulty",
		"Readable with practically no difficulty",
		"Perfectly readable"
	},
	*S[]={"Faint signals,barely perceptible,",
		"Faint signals,barely perceptible,",
		"Weak signals,",
		"Fair signals,",
		"Fairly good signals,",
		"Good signals,",
		"Moderately strong signals,",
		"Strong signals,",
		"Extremely strong signals,"
	};
	scanf("%d",&number);
	if(number<=59&&number>=11&&number%10!=0){
		printf("%s",S[(number/10)-1]);
		printf("%s\n",R[(number%10)-1]);
	}
	return 0;
} 
