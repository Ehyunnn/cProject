#include <stdio.h>
#define nil NULL//nil == 0, NULL==0
int main(int argc, char **argv){
	printf("FILE io  \n");
	
	//r(in:read),w(out:write),a(out:append)
	FILE *fp_read = fopen("test28su.txt","r");
	FILE *fp_write = fopen("test28sum.txt","w");
	
	printf("%p\n",fp_read);//nil == 0, NULL==0
	
	if(fp_read == NULL){
		printf("File not found\n");
		return 1;
	}
	
	int su1,su2;
	int count=1;
	
	while(feof(fp_read)==0){
		fscanf(fp_read,"%d%d",&su1,&su2);
		printf("%d, %d+%d=%d\n",count , su1 , su2 , su1+su2);
		fprintf(fp_write,"%d, %d+%d=%d\n",count , su1 , su2 , su1+su2);
		count++;
		printf(">>>>%d\n",feof(fp_read));
	}
	
	
	fclose(fp_read);
	return 0;
}
