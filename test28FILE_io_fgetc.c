#include <stdio.h>
#define nil NULL//nil == 0, NULL==0
int main(int argc, char **argv){
	printf("FILE io  \n");
	
	//r(in:read),w(out:write),a(out:append)
	FILE *fp_read = fopen("test28.txt","r");
	//java : File f =  new File("test28.txt");
	
	printf("%p\n",fp_read);//nil == 0, NULL==0
	
	if(fp_read == NULL){
		printf("File not found\n");
		return 1;
	}
	
	char c = fgetc(fp_read);
	printf(">>>%c(%d)\n",c,c);
	while(c != 255){//linux 255, window -1
		printf("%c",c);
		
		c = fgetc(fp_read);
		printf(">>>%c(%d)\n",c,c);//�(255)
	}
	
	
	fclose(fp_read);
	return 0;
}
