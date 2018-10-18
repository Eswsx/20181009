#include "reg52.h"
sbit led0 = P2^0;	  
sbit led1 = P2^1;
sbit led3 = P2^3;
sbit led5 = P2^5;
sbit led7 = P2^7;
sbit led2 = P2^2;
sbit led4 = P2^4;
sbit led6 = P2^6;
void main(){

	while(1){
		led0 = 0;
		led1 = 0;
		led3 = 0;
		led5 = 0;
		led7 = 0;
		led0 = 0;
		led2 = 0;
		led4 = 0;
		led6 = 0;


	}

}