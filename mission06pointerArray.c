/*
 * 주어진 배열을 포인터를 사용하여 출력하시오.
 */
#include <stdio.h>
int main(int argc, char **argv){
	int arr[3][2] = { 
		{11,22},
		{22,44},
		{44,88}
	};

	int (*pt_arr)[2] = arr;
	
	int x,i;
	for(x=0;x<3;x++){
		for(i=0;i<2;i++){
			printf("%d ", pt_arr[x][i]);
		}
		printf("\n");
	}
	
	return 0;
}

