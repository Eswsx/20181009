#include<stdio.h>
#include<stdlib.h>
typedef struct _node{
	int value;
	struct _node *next;
} Node;

int main()
{
	int number=0;	
	Node *head=NULL;
	Node *last;
	//输入 
	scanf("%d",&number);
	if(number!=-1){
		while(number!=-1){
			Node *p = (Node*)malloc(sizeof(Node));
			p->value=number;
			p->next=NULL;
			last=head;
			if(last){
				while(last->next){
					last=last->next;
				}
					last->next=p;
			}
			else{
				head=p;
			}
			scanf("%d",&number);
		}	
	}
	//复制倒叙链表
	Node *linshi=NULL;
	Node *newhead=NULL;
	Node *newlast;
	while(head->next){
		last=head;
		while(last->next){
			linshi=last;
			last=last->next;
			}
		Node *newp=(Node*)malloc(sizeof(Node));
		newp->value=last->value;
		newp->next=NULL;
		newlast=newhead;
		if(newlast){
			while(newlast->next){
				newlast=newlast->next;
			}
			newlast->next=newp;
		}else{
			newhead=newp;
		}
		free(last);
		linshi->next=NULL;		
	}
	Node *newp=(Node*)malloc(sizeof(Node));
	newp->value=head->value;
	newp->next=NULL;
	while(newlast->next){
		newlast=newlast->next;
	}
		newlast->next=newp;
	//输出
	Node *p1;
	p1=newhead;
	while(p1->next){
		printf("%d ",p1->value);
		p1=p1->next;
	} 
	printf("%d ",p1->value);
	return 0; 
} 
