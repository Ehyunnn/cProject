#include <stdio.h>
#include <wiringPi.h>
#include <string.h>
#define LED4 4 // gpio 23
#define LED7 7 // gpio 4
#define RED_BUTTON 0// gpio 17
#define GREEN_BUTTON 1// gpio 18

int mTime= 1000;
void ledOnOff();

int main(int argc, char **argv)
{
	if(wiringPiSetup()==-1) return 1;
	ledOnOff();
	
	return 0;
}
void ledOnOff(){
	
	pinMode(LED4, OUTPUT);
	pinMode(LED7, OUTPUT);
	pinMode(RED_BUTTON, INPUT);
	pinMode(GREEN_BUTTON, INPUT);
	pullUpDnControl(RED_BUTTON,PUD_UP);
	pullUpDnControl(GREEN_BUTTON,PUD_UP);
	digitalWrite(LED4,0);
	while(1){
			//printf("RED_BUTTON >>>%d",digitalRead(RED_BUTTON));
			if(digitalRead(RED_BUTTON)==1){
				//printf("RED_BUTTON up\n");
				digitalWrite(LED4,0);
			}else if(digitalRead(RED_BUTTON)==0){
				printf("RED_BUTTON down\n");
				digitalWrite(LED4,1);
			}
			
			
			if(digitalRead(GREEN_BUTTON)==1){
				//printf("GREEN_BUTTON up\n");
				digitalWrite(LED7,0);
			}else if(digitalRead(GREEN_BUTTON)==0){
				printf("GREEN_BUTTON down\n");
				digitalWrite(LED7,1);
			}
			
			delay(mTime);
		}
}
