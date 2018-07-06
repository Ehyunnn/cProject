/*
 * 10*10 이하의  정수형 이차원 배열을 입력받아서
 * 그 배열의 각 행의 요소의 합을 출력하는 
 * 프로그램을 완성하시오.
 * 
 * 입력 예
 * 3 4   >>>  3행4열을 의미함
 * 4 2 6 3 
 * 7 9 3 4 
 * 5 1 2 1
 * 
 * 출력 예
 * 15
 * 23
 * 9
 */


#include <stdio.h>

int main(int argc, char **argv){
	int row, col;
	int arr[12][12];
	
	printf("input row행 col열>>>");
	scanf("%d%d",&row, &col);
	int x,i;
	for(x=0;x<row;x++){
		for(i=0;i<col;i++){
			printf("input int >>");
			scanf("%d",&arr[x][i]);
		}
	}	
	for(x=0;x<row;x++){
		for(i=0;i<col;i++){
			printf("%d ",arr[x][i]);
		}
		printf("\n");
	}	
	for(x=0;x<row;x++){
		int sum = 0;
		for(i=0;i<col;i++){
			sum += arr[x][i];
		}
		printf("%d\n", sum);
	}
	
	return 0;
}

