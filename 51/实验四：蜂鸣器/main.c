#include"reg52.h"
sbit beep = P1^5 ;

typedef unsigned char u8;
typedef unsigned int u16;

void delay(u16 i){
	while(i--);
}

void main(){
	
	while(1){
		beep = ~beep;		
		delay(1000);

	
	}

}