#include <stdio.h>
void printStringArray(char *pt_str[3]);
void printStringArray2(char strs[3][10] );
int main(int argc, char **argv){
	
	
	printf("pointer and stringarray \n");
		
	char *pt_str[3]= {"kim","lee","yangssem"};
	char strs[3][10] = {"kim2","lee2","yangssem2"};
	
	
	printStringArray(pt_str);
	printf("====================\n");
	printStringArray2(strs);
	
	printf("====================\n");
	char subject[10] = "kor";
	printf("%s\n",subject);
	
	char *pt_subject = "eng";
	printf("%s\n",pt_subject);
	
	
	return 0;
}
void printStringArray(char *pt_str[3]){
	printf("%d\n",sizeof(pt_str));
	int i;
	for(i=0;i<3;i++){
		printf("%s\n",pt_str[i]);
	}
}
void printStringArray2(char strs[3][10] ){
	printf("%d\n",sizeof(strs));
	int i;
	for(i=0;i<3;i++){
		printf("%s\n",&strs[i][0]);
	}
}
