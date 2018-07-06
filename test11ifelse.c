#include <stdio.h>

int main(int argc, char **argv)
{
	printf("if ~else\n");
	int x = 9;
	if(x==10){
		printf("ten");
	}else if(x==9){
		printf("nine");
	}else{
		printf("other");
	}
	
	return 0;
}

