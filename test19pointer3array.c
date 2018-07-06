#include <stdio.h>

#define ROW_MAX 2
#define COL_MAX 3
int main(int argc, char **argv){
	
	
	printf("pointer and array\n");
	
	int arr[ROW_MAX][COL_MAX] = { { 1,2,3 } , { 4,5,6 } } ;
	
	int (*pt)[COL_MAX] = arr;
	
	
	//sus == &sus[0]
	//*sus == sus[0]
	//*(sus+0) == sus[0]
	// pt+1 == pt + sizeof(*pt)	
	//1. pt[x] = arr[x]
	//2.  pt[x][i] = arr[x][i]
	
	int x,i;
	for(x=0;x<ROW_MAX;x++){
		for(i=0;i<COL_MAX;i++){
			printf("%d ", pt[x][i]);			
		}
		printf("\n");
	}
	
	
	return 0;
}
