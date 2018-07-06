#include <stdio.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
	printf("while \n");
	int i;
	while(i<10){
		
		printf("while %d\n",i);
		if(i!=0 && i%4==0) {
			break;
		}else if(i>2){
			break;
		}
		++i;
	}
	
	
	return 0;
}

