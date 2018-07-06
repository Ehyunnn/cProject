#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	
	
	printf("strcpy  \n");
	printf("============= \n");
	
	char str[] = "KIM";//{'K','I','M'}
	
	printf("%p \n",str);
	printf("%d \n",(int )str);
	printf("%s \n",str);
	printf("----------- \n");
	
	//str = "yangssem111";//불가능.
	strcpy(str,"yangssem222");
	
	printf("%p \n",str);
	printf("%d \n",(int )str);
	printf("%s \n",str);
	
	printf("============= \n");
		
	char *pt_str = "ABC";//{'A','B','C'}
	printf("%p \n",pt_str);
	printf("%d \n",(int )pt_str);
	printf("%s \n",pt_str);
	printf("----------- \n");
	
	pt_str = "XYZ";//{'X','Y','Z'}
	//strcpy(pt_str,"yangssem222"); //불가능.
	
	printf("%p \n",pt_str);
	printf("%d \n",(int )pt_str);
	printf("%s \n",pt_str);
	
	
	printf("============= \n");
	
	printf("input su >>> ");
	int su;
	scanf("%d",&su);
	printf("su:%d\n",su);
	
	printf("============= \n");
	
	printf("input name >>> ");
	char name[100];
	scanf("%s",name);
	printf("name:%s\n",name);
	printf("name length:%d\n",strlen(name));
	
	printf("============= \n");
	
	printf("input name >>> ");
	
	char *pt_name = name;
	
	scanf("%s",pt_name);
	printf("pt_name:%s\n",pt_name);
	printf("pt_name length:%d\n",strlen(pt_name));
	 
	return 0;
}
