#include <stdio.h>

int main(int argc, char **argv)
{
	printf("typedef\n");
	
	typedef unsigned int uint;
	uint x = 100;
	printf("typedef  uint : %u\n",x);
	
	typedef unsigned char uchar;
	uchar c = 255;
	printf("typedef  uchar : %u\n",c);
	return 0;
}

