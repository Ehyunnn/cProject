#include <stdio.h>

int main(int argc, char **argv){
	
	
	printf("pointer and stringarray \n");
	//String names[] = {"kim","lee","yangssem"};
	char *pt_str[3]= {"kim","lee","yangssem"};
	
	printf("====================\n");
	int i;
	for(i=0;i<3;i++){
		printf("%s\n",pt_str[i]);
	}
	
	return 0;
}
