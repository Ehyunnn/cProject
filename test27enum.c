#include <stdio.h>
enum Car{
		Ray,Sonata,Santafe,Volvo,OOOO,BMW
};
int main(int argc, char **argv){
	printf("enum  \n");

	//열거형 상수 : enumeration
	//const int a = 10;
	//const int b = 20;
	//const int c = 30;
	
	printf("Ray : %d\n", Ray);
	printf("Sonata : %d\n", Sonata);
	printf("Santafe : %d\n", Santafe);
	printf("Volvo : %d\n", Volvo);
	printf("OOOO : %d\n", OOOO);
	printf("BMW : %d\n", BMW);
	enum Car c;
	c = Santafe;
	switch(c){
	case Ray:
		printf("Your Car code : %d\n", c);
		break;
	case Sonata:
		printf("Your Car code : %d\n", c);
		break;
	case Santafe:
		printf("Your Car code : %d\n", c);
		break;
	case Volvo:
		printf("Your Car code : %d\n", c);
		break;
	default:
		printf("Other\n");
		break;
	}
	
	return 0;
}
