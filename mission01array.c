/*
 * 100개 이하의 정수를 입력받아서 
 * 첫 줄에 짝수 번째 숫자들을 순서대로 출력하고
 * 다음 줄에 홀수 번째 숫자들을 순서대로 출력하는
 * 프로그램을 완성하시오.
 * 입력 예 
 * 7         >>> 7개 정수형값을 입력받겠다고 했을때
 * 3 1 4 1 5 9 2       >>> 7개 정수를 입력받아서 배열에 넣는다.
 * 
 * 출력 예
 * 1 1 9    >>>   짝수 번째 숫자들
 * 3 4 5 2   >>>   홀수 번째 숫자들
 */


#include <stdio.h>

int main(int argc, char **argv){
	int n;
	int arr[105];

	printf("input int count >>");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		printf("input int >>");
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<n;i+=2){
		printf("%d",arr[i]);
	}
	printf("\n");
	
	
	for(i=0;i<n;i+=2){
		printf("%d",arr[i]);
	}
	printf("\n");
	
	return 0;
}

