#include <stdio.h>
void test();
int main(int argc, char **argv)
{
	printf("pointer....\n");
	
	int x = 10;
	printf("x value : %d\n", x);
	printf("x address : %p\n", &x);
	
	int y = x;
	printf("y value : %d\n", y);
	printf("y address : %p\n", &y);
	
	int *ptx;
	ptx = &x;
	printf("ptx address : %p\n", ptx); 
	printf("sizeof(ptx): %d byte\n", sizeof(ptx));
	printf("*ptx value : %d\n", *ptx);
	
	
	int *pty;
	pty = &y;
	printf("pty address : %p\n", pty);
	printf("*pty value : %d\n", *pty);
	
	test(&x);
	
	
	return 0;
}

void test(int *ptx){
	printf("test ptx address: %p\n", ptx);
	printf("test *ptx value: %d\n", *ptx);
}
