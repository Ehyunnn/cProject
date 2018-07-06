#include <stdio.h>
#include "test18function2.h"

int main(int argc, char **argv){
	printf("function2...Call by Value\n");
	
	int x = 200;
	int y = 400;
	
	int total = sum(x,y);
	
	printf("total:%d\n",total);
	
	//mission~
	//test18functionScore.c
	//test18fucntionScore.h
	
	return 0;
}



