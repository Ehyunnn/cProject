#include <stdio.h>

#define MAX 3
void printArr(int sus[MAX] );
void printArr2(int *sus);
int main(int argc, char **argv){
	
	
	printf("pointer and array\n");
	
	int sus[MAX] = {11,22,33};
	
	//sus == &sus[0]
	//*sus == sus[0]
	//*(sus+0) == sus[0]
	// pt+1 == pt + sizeof(*pt)	
	
	printArr(sus);
	printArr2(sus);
	return 0;
}

void printArr(int sus[MAX] ){
	printf("printArr()\n");
		
	int i;
	for(i=0;i<MAX;i++){
		printf("%p  %d\n", &sus[i],  sus[i]);
	}
}

void printArr2(int *sus){
	printf("printArr2()\n");
	//sus == &sus[0]
	//*sus == sus[0]
	//*(sus+0) == sus[0]
	// pt+1 == pt + sizeof(*pt)	
	int i;
	for(i=0;i<MAX;i++){
		printf("%p %p %d %d\n",  sus, sus+i, *(sus+i),sus[i]);
	}
	
}




