#include <stdio.h>

typedef union names{
	char a_name[10] ;
	char b_name[12] ;
	char c_name[14] ;
	int d_name ;
	
}U_NAMES;
struct Test{
	int num;
	double avg;
	U_NAMES uns;
};


int main(int argc, char **argv){
	printf("union  \n");
	struct Test t;
	U_NAMES un;
	printf("union sizeof(un) : %d\n",sizeof(un));
	printf("struct sizeof(t) : %d\n",sizeof(t));
	
	
	
	
	return 0;
}
