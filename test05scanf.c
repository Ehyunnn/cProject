#include <stdio.h>

int main(int argc, char **argv)
{
	char name[200] ; 
	printf("input name >>> ");
	//scanf("%100s",name);
	scanf("%s",name);
	
	printf("name : %s\n", name);
	
	int su;
	printf("input su >>>");
	scanf("%d",&su);
	printf("su : %d\n", su+100);
	
	double d;
	printf("input double >>> ");
	scanf("%lf",&d);
	printf("d : %lf\n",d);
	 
	return 0;
}

