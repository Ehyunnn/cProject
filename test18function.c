#include <stdio.h>
void test();
int main(int argc, char **argv)
{
	printf("function...Call by Value\n");
	
	//test(100);
	int x = 100;
	int y = 200;
	char z[] = "yangssem";
	test(x,y,z);//Call by Value
	
	
	return 0;
}

void test(int x,int y,char z[]){
	
	printf("test(%d,%d,%s)...\n",x,y,z);
	
}
