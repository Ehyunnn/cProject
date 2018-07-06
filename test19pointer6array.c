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
	
	int arr[4] = {10,20,30,40};
		
	int *ptr[4];
	
	//ptr[0] = &arr[0];
	//ptr[1] = &arr[1];
	//ptr[2] = &arr[2];
	//ptr[3] = &arr[3];
	int i;
	for(i=0;i<4;i++){
		ptr[i] = &arr[i];
	}
	
	for(i=0;i<4;i++){
		printf("%d ",*ptr[i]);
	}
	printf("\n");
	
	
	return 0;
}
