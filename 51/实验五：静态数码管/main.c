#include"reg52.h"

typedef unsigned char u8;
typedef unsigned int u16;

sbit LSA = P2^2;
sbit LSB = P2^3;
sbit LSC = P2^4;

u8 code smgduan[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};


void delay(u16 i){
	while(i--);
}

void main(){
	u8 x=0;
	u8 i=0;
	LSA=0;
	LSB=0;
	LSC=0;

	while(1){
 	   P0=smgduan[x];
	   delay(15000);
	   
	     if(x==16){
		     i++;
		   	 if(i==1)LSA=1;
			 else if(i==2){LSA=0;LSB=1;}
			 else if(i==3)LSA=1;
			 else if(i==4){LSA=0;LSB=0;LSC=1;}
			 else if(i==5)LSA=1;
			 else if(i==6){LSA=0;LSB=1;}
			 else if(i==7){LSA=1;}	
			 else if(i==8){i=0,LSA=0;LSB=0;LSC=0;}
			 
	
	
		   	x=-1;
	   
		}
		x++;

		}
}