#include <stdio.h>
struct Test{
	int num;
	double avg;
};
union Score{
	int num;
	double avg;	
};
int main(int argc, char **argv){
	printf("union  \n");
	struct Test t;
	union Score s;
	printf("struct sizeof(t) : %d\n",sizeof(t));
	printf("union  sizeof(s) : %d\n",sizeof(s));
	
	union Score s1 = {99};
	printf("s1.num : %d\n",s1.num);
	printf("s1.avg : %.2f\n",s1.avg);//default value
	
	
	union Score s2 = {.avg=3.14};
	printf("s2.num : %d\n",s2.num);//garbage value
	printf("s2.avg : %.2f\n",s2.avg);
	
	//struct Test t2; = {.avg=3.14};//Error
	
	
	return 0;
}
