#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	printf("chars\n");
	
	char cs[] = "Kim";
	printf("cs : %s\n",cs);
	
	
	char cs2[8] = {'k','i','m'};
	printf("cs2 : %s\n",cs2);
	printf("strlen : %d\n", strlen(cs2));
	
	printf("%d\n",strcmp(cs,cs2));
	printf("%d\n",strcmp(cs2,cs));
	
	printf("%s\n",strchr(cs2,'m'));
	printf("%p\n",strchr(cs2,'m'));
	
	printf("%s\n",strcat(cs,cs2));
	
	printf("%s\n",strcpy(cs,cs2));
	
	char cs3[] = "aaa";
	printf("%s\n",strstr(cs3,"b"));
	printf("%s\n",strtok(cs3,"c"));
	
	
	
	return 0;
}

