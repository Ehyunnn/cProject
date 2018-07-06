/*
 * 주어진 코드를 보고 출력되어질 결과를
 * 적어서 제출하시오.
 */


#include <stdio.h>

int main(int argc, char **argv){
	int x = 99;
	int y = 88;
	
	int *pt;
	
	pt = &x;
	*pt = 77;
	
	pt = &y;
	*pt = 66;
	
	printf("%d\n",x);//결과:77,99
	printf("%d\n",y);//결과:66,88
	printf("%d\n",*pt);	//결과:66
	return 0;
}

