// Aloha_world.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "graphics.h"

int main(){
	initgraph(640,480);

	outtextxy(100,300,"Aloha world!");
	line(10,10,400,400);

	ege::getch();
	closegraph;
	return 0;
}

