#include <stdio.h>
int main(int argc, char **argv)
{
	printf("type...\n");
	int su = 100;// 2byte or 4byte
	printf("su : %d\n",su);
	
	unsigned int su2 = -100;
	printf("unsigned su2 : %u\n",su2);
	
	char c = 'a'; //1byte
	printf("c : %c\n",c);
	
	char c2 = 255;
	printf("c2 : %d\n",c2);
	
	unsigned char c3 = 256;
	printf("c3 : %u\n",c3);
	
	short s1 = 32767; //2byte
	printf("s1 : %d\n",s1);
	
	short s2 = 32768;
	printf("s2 : %d\n",s2);
	
	unsigned short s3= 32768;
	printf("s3 : %u\n",s3);
	
	long  lng = 2100000000;//4byte
	printf("lng : %ld\n",lng);
	
	//long  lng2 = 2200000000;//4byte
	//printf("lng2 : %ld\n",lng2);
	
	unsigned long  lng3 = 2200000000;//4byte
	printf("lng3 : %lu\n",lng3);
	
	float f = 3.141592f;
	printf("float %f\n",f);
	printf("float %.2f\n",f);
	
	 
	double d = 3.141592;
	printf("double %lf\n",d);
	printf("double %.2lf\n",d);
	return 0;
}

