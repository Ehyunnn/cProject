#include <stdio.h>
typedef struct Test{
	char a;
	char b;
	char c;
	int su1;
	int su2;
	int su3;
	int su4;
	char d;
}TEST;
typedef struct bit_memberField{
	char a:1;
	char b:1;
	unsigned char c:1;
	int su1:1;
	int 		 :2;
	int su3:3;
	int su4:4;
	char d:1;
}BIT_MF;

int main(int argc, char **argv){
	
	
	printf("bit member field struct  \n");
	TEST t;
	printf("sizeof(t): %d byte\n",sizeof(t));
	
	BIT_MF bm;
	printf("sizeof(bm): %d byte\n",sizeof(bm));
	
	return 0;
}
