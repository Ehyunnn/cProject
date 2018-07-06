#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	
	
	printf("pointer  \n");
	
		
	char c = 'C';
	printf("%c \n",c);
	
	char cs[] = {'A','B','C','\0'};
	int i;
	for(i=0;i<3;i++){
		printf("%c \n",cs[i]);
	}
	printf("%s \n",&cs[0]);
	printf("================  \n");
	
	char *pt_cs;
	pt_cs = cs;
	printf("%c \n",*(pt_cs+0));
	printf("%c \n",*(pt_cs+1));
	printf("%c \n",*(pt_cs+2));
	*(pt_cs+0) = 'T';
	printf("%c \n",*(pt_cs+0));
	printf("%c \n",*(pt_cs+1));
	printf("%c \n",*(pt_cs+2));
	
	printf("================  \n");
	
	char str[] = "XYZ";
	printf("%s \n",str);
	printf("%s \n",&str[0]);
	
	printf("================  \n");
	
	char *pt_str = "ABC";
	printf("%s \n",pt_str);
	
	pt_str = "yangssem";
	printf("%s \n",pt_str);
	
	
	//strcpy(pt_str,"yangssem222"); //불가능.
	strcpy(str,"yangssem222"); //가능.
	printf("%s \n",str);
	
	 
	return 0;
}
