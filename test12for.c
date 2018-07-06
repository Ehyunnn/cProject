#include <stdio.h>

int main(int argc, char **argv)
{
	printf("for \n");
	int i;
	for(i=0;i<10;i++){
		printf("%d\n",i);
	}
	
	int x;
	for(x=2;x<10;x++){
		for(i=1;i<10;i++){
			printf("%d * %d = %d\t",x,i,x*i);
		}
		printf("\n");
	}
	
	return 0;
}

