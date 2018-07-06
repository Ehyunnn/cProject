#include <stdio.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
	printf("array \n");
	
	int sus[] = {1,2,3,4,5};
	
	//printf("%d\n",sus[0]);
	//printf("%d\n",sus[1]);
	//printf("%d\n",sus[2]);
	//printf("%d\n",sus[3]);
	//printf("%d\n",sus[4]);
	
	int i;
	for(i=0;i< (sizeof(sus)/sizeof(int));i++){
		printf("sus %d\n",sus[i]);
	}
	
	//init all 0
	int sus2[10] = {0,};
	//printf("sus2 %d\n",sus2[4]);
	
	for(i=0;i< (sizeof(sus2)/sizeof(int));i++){
		printf("sus2 %d\n",sus2[i]);
	}
	
	int suss[2][3] = {{1,2,3},{4,5,6}};
	
	printf("sizeof(suss) %d\n",sizeof(suss));
	printf("sizeof(suss[0]) %d\n",sizeof(suss[0]));
	printf("sizeof(suss)/sizeof(suss[0]) %d\n",sizeof(suss)/sizeof(suss[0]));
	int susslen = sizeof(suss)/sizeof(suss[0]);
	printf("susslen %d\n",susslen);
	
	int x;
	for(x=0;x< susslen;x++){
		for(i=0;i< (sizeof(suss[x])/sizeof(int));i++){
			printf("suss %d\n",suss[x][i]);
		}
	}
	
	char names[3][10] = {"yangssem1","yangssem2","yangssem3"};
	
	for(i=0;i< (sizeof(names)/sizeof(names[0]));i++){
			printf("names[%d] %s\n",i,names[i]);
	}
	
	bool bs[3] = {true,false,true };
	printf("sizeof(bs) : %d\n",sizeof(bs));
	for(i=0;i< sizeof(bs);i++){
			printf("bs[%d] %d\n",i,bs[i]);
	}
	return 0;
}

