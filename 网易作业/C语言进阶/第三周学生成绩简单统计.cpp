#include<stdio.h>
#define number 10
typedef struct{
	int no;
	char name[20];
	int score[3];
	}Student;
	
void student_input(Student *pStudent);
void student_print(const Student *pStudent);
double student_average(const Student *pStudent);
int student_get_score(const Student *pStudent,int index);
	
int main()
{
	int i=0,max1=0,max2=0,max3=0,min1=5,min2=5,min3=5,sum1=0,sum2=0,sum3=0;
	double av1=0,av2=0,av3=0;
	Student tongxue[number];
	while(i<number){
		tongxue[i].no=i+1;
		student_input(&tongxue[i]);
		i++;
	}
	i=0;
	printf("no\tname\tscore1\tscore2\tscore3\taverage\n");
	while(i<number){
		student_print(&tongxue[i]);
		if(max1<student_get_score(&tongxue[i],0))max1=student_get_score(&tongxue[i],0);
		if(max2<student_get_score(&tongxue[i],1))max2=student_get_score(&tongxue[i],1);
		if(max3<student_get_score(&tongxue[i],2))max3=student_get_score(&tongxue[i],2);
		if(min1>student_get_score(&tongxue[i],0))min1=student_get_score(&tongxue[i],0);
		if(min2>student_get_score(&tongxue[i],1))min2=student_get_score(&tongxue[i],1);
		if(min3>student_get_score(&tongxue[i],2))min3=student_get_score(&tongxue[i],2);
		sum1+=student_get_score(&tongxue[i],0);
		sum2+=student_get_score(&tongxue[i],1);
		sum3+=student_get_score(&tongxue[i],2);
		i++;
	}
	av1=sum1*1.0/number;
	av2=sum2*1.0/number;
	av3=sum3*1.0/number;
	printf("average\t\t%.1f\t%.1f\t%.1f\t\n",av1,av2,av3);
	printf("min\t\t%d\t%d\t%d\t\n",min1,min2,min3);
	printf("max\t\t%d\t%d\t%d\t\n",max1,max2,max3);
} 

void student_input(Student *pStudent){
	scanf("%s",pStudent->name);
	scanf("%d",&pStudent->score[0]);
	scanf("%d",&pStudent->score[1]);
	scanf("%d",&pStudent->score[2]);
	
}

void student_print(const Student *pStudent){
	printf("%d\t",pStudent->no);
	printf("%s\t",pStudent->name);
	printf("%d\t",pStudent->score[0]);
	printf("%d\t",pStudent->score[1]);
	printf("%d\t",pStudent->score[2]);
	printf("%f\t\n",student_average(pStudent));
}

double student_average(const Student *pStudent){
	double average=0;
	average=(pStudent->score[0]+pStudent->score[1]+pStudent->score[2])*1.0/3;
	return average;
}

int student_get_score(const Student *pStudent,int index){
	return pStudent->score[index];
}
