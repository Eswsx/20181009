#include "acllib.h"
#include<stdio.h>
#define JUD 0
#define NOTJUD 1
int X0=0,Y0=0;
int jud=0;
int FirstPointJud=NOTJUD;
void paint(int x,int y){
	beginPaint();
	line(X0,Y0,x,y);
		X0=x;
		Y0=y;
	endPaint();
}


void Mouse(int x,int y,int button,int event){
	static int a=0; 
	a++;
//	printf("x=%d y=%d button=%d event=%d a=%d\n",x,y,button,event,a);
	if(event==0){
		jud=1;
		if(FirstPointJud==NOTJUD){
			X0=x;
			Y0=y;
			FirstPointJud=JUD;
		}
	}
	if(jud==1){
		paint(x,y);
	}
	if(event==2){
		jud=0;
		FirstPointJud=NOTJUD;
	}
}

int Setup()
{
	initWindow("Test",DEFAULT,DEFAULT,800,800);
//	initConsole();
	registerMouseEvent(Mouse);
	return 0;
}
