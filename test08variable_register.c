#include <stdio.h>

int su = 0;
int main(int argc, char **argv)
{
	printf("variable...%d\n",su);
	su = 11;
	printf("variable...%d\n",su);
	if(1){
		su = 22;
		printf("variable...%d\n",su);
		//auto int su = 10;
		register int su = 10;//%d,*pt,4byte
		su = 100;
		printf("variable...%d\n",su);
	}
	printf("variable...%d\n",su);
	
	return 0;
}

