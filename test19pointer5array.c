#include <stdio.h>

#define ROW_MAX 2
#define COL_MAX 3
int main(int argc, char **argv){
	//sus == &sus[0]
	//*sus == sus[0]
	//*(sus+0) == sus[0]
	// pt+1 == pt + sizeof(*pt)	
	//1. pt[x] = arr[x]
	//2.  pt[x][i] = arr[x][i]
	//3. int (*row)[COL_MAX] = arr;//&{1,2,3}
	//배열 포인터 : 배열을 가르키는 포인터
	
	printf("pointer and array\n");
	
	//포인터 배열 : 포인터들로 이루어진 배열
	
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	
	int *ptr[4];
	
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	ptr[3] = &d;
	
	printf("%d %d %d %d\n",*ptr[0],*ptr[1],*ptr[2],*ptr[3]);
	
	return 0;
}
