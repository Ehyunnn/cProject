/*
 * 다음중 주소값을 출력하지 않는 번호를 고르시오.
 */


#include <stdio.h>

int main(int argc, char **argv){
	int arr[3][2] = { 0 };
	
	printf("%p\n",&arr);//1
	printf("%p\n",arr);//2
	printf("%p\n",*arr);//3
	
	printf("%p\n",&arr[0]);//4
	printf("%d\n",arr[0]);//5
	printf("%d\n",*arr[0]);//6
	
	printf("%d\n",&arr[0][0]);//7
	printf("%d\n",arr[0][0]);//8
	
	
	
	return 0;
}

