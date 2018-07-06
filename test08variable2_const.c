#include <stdio.h>

//const int su = 0;
int su = 0;
int main(int argc, char **argv)
{
	printf("variable...%d\n",su);
	su = 11;
	printf("variable...%d\n",su);
	if(1){
		su = 22;
		printf("variable...%d\n",su);
		const int su = 10;
		//su = 100;
		printf("variable...%d\n",su);
	}
	printf("variable...%d\n",su);
	
	return 0;
}

