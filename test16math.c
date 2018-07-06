#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//gcc compile option add [-lm]
//gcc -Wall -o test16math test16math.c -lm
int main(int argc, char **argv)
{
	printf("math\n");
	
	int x = 2;
	int y = 8;
	printf("pow(2,8): %.2f\n",pow(x,y));
	
	int h = 100;
	printf("sqrt(100): %.2f\n",sqrt(h));
	
	printf("abs(-111): %d\n",abs(-111));
	
	printf("ceil(-99.99): %f\n",ceil(-99.99));
	printf("floor(-99.01): %f\n",floor(-99.01));
	return 0;
}

