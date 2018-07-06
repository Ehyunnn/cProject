#include <stdio.h>
int main(int argc, char **argv){
	
	
	printf("pointer for pointer : 다중포인터 \n");
		
	int x;
	
	int *pt = &x;
	printf("pt=%p\n",pt);
	
	int **ppt = &pt;
	printf("ppt=%p\n",ppt);
	
	**ppt = 100;
	
	
	
	int ***pppt = &ppt;
	***pppt = 111;
	
	printf("pt=%d\n",*pt);
	
	printf("x=%d\n",x);
	 
	return 0;
}
