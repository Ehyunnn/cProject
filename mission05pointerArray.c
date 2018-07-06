/*
 * 다음중 같은 주소를 출력하는 번호를 고르시오.
 */
#include <stdio.h>
int main(int argc, char **argv){
	int arr[3][2] = { 0 };

	printf("%d\n",&arr[0][0]);//1
	
	printf("%d\n",arr[0] + 1);//2
	printf("%d\n",&arr[0] + 1);//3
	
	printf("%d\n",arr+ 1);//4
	printf("%d\n",&arr+ 1);//5
	
	return 0;
}

