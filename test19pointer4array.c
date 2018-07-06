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
	
	printf("pointer and array\n");
	
	int arr[ROW_MAX][COL_MAX] = { { 1,2,3 } , { 4,5,6 } } ;
		
	int (*row)[COL_MAX];//&{ 1,2,3 }, &{ 4,5,6 } 
	int *col;//&1,&2,&3      &4,&5,&6
	for(row= arr;row<arr+ROW_MAX;row++){
		for(col = *row ; col<*row+COL_MAX ; col++){
				printf("%d ", *col);
		}	
		printf("\n");	
	}
	
	
	
	
	return 0;
}
