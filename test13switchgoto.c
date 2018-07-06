#include <stdio.h>

int main(int argc, char **argv)
{
	printf("switch case break \n");
	
	int x = 9;
	switch(x){
	case 10:
		printf("%d\n",x);
		goto EXIT;
	case 9:
		printf("%d\n",x);
		x *= 10;
		goto EXIT;
	case 8:
		printf("%d\n",x);	
		goto EXIT;
	default:	
		printf("other..\n");
		goto EXIT;
	}
	
	EXIT:
		printf("EXIT..%d\n",x);
	return 0;
}

