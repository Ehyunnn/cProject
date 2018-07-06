#include <stdio.h>

int main(int argc, char **argv)
{
	printf("switch case break \n");
	
	int x = 9;
	switch(x){
	case 10:
		printf("%d\n",x);
		break;
	case 9:
		printf("%d\n",x);
		break;
	case 8:
		printf("%d\n",x);	
		break;
	default:	
		printf("other..\n");
		break;
	}
	
	
	return 0;
}

