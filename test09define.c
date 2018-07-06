#include <stdio.h>
#define LED 4
#define sum(a) ((a##1)+(a##2)+(a##3))
#define print(a) printf("%d * %d = %d\n", a##x,a##y,((a##x)*(a##y)))
//#undef print
//#if~#endif,  #error 
int main(int argc, char **argv)
{
		int d1=10,d2=20,d3=30;
		int dx=100,dy=200;
		
		//int kor=99,eng=88,math=77;
		
		printf("define...%d\n",LED);
		
		printf("define...%d\n",sum(d));
		
		print(d);
		
		//int tt = total(kor,eng,math);
		//printf("total:%dn",tt);
		
		
		
		printf("inner define...%s\n",__DATE__);
		printf("inner define...%s\n",__TIMESTAMP__);
		printf("inner define...%s\n",__TIME__);
		printf("inner define...%s\n",__FILE__);
		printf("inner define...%d\n",__LINE__);
		
		return 0;
}

