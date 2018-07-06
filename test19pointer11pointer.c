#include <stdio.h>

void test(int *pt);
void test2(int **ppt);
int main(int argc, char **argv){
	
	
	printf("pointer for pointer : 다중포인터 \n");
		
	int arrs[2][3] = {{1,2,3},{4,5,6}};
	
	int (*row)[3] = arrs;
	int *pt = (int *)arrs;
	int **ppt = (int **)arrs;
	
	printf("row %p\n",row);
	printf("pt %p\n",pt);
	printf("ppt %p\n",ppt);
	
	test((int *)arrs);
	test2((int **)arrs);
	 
	return 0;
}

void test(int *pt){
	
	
}

void test2(int **ppt){
	
	
}
