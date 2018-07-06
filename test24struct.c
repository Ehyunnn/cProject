#include <stdio.h>
#include <string.h>

struct Test{
	int x;
	double d;
	char name[10];
	char *pt_name;
} ;

struct Test2{
	int x;
	double d;
} t21,t22;

struct {
	int x;
	double d;
} t31,t32;

int main(int argc, char **argv){
	
	
	printf("structure 구조체 : struct \n");
	
	struct Test t;
	
	printf("%d\n",t.x);
	printf("%.2f\n",t.d);
	
	t.x = 100;
	t.d = 3.14159265;
	//t.name = "yangssem";//X
	strcpy(t.name,"yangssem");//O
	
	t.pt_name = "KIM";//O
	//strcpy(t.pt_name,"KIM");//X
	printf("%d\n",t.x);
	printf("%.2f\n",t.d);
	printf("%s\n",t.name);
	printf("%s\n",t.pt_name);
	printf("sizeof(t) : %d + %d + %d + %d = %d\n",
	sizeof(t.x),sizeof(t.d),
	sizeof(t.name),sizeof(t.pt_name),sizeof(t));
	
	printf("=======\n");
	
	struct Test2 t2;
	t2.x = 200;
	t2.d = 22.22;
	printf("%d\n",t2.x);
	printf("%.2f\n",t2.d);
	
	printf("=======\n");
	
	t21.x = 211;
	t21.d = 211.11;
	printf("%d\n",t21.x);
	printf("%.2f\n",t21.d);
	
	printf("=======\n");
	
	t22.x = 222;
	t22.d = 222.22;
	printf("%d\n",t22.x);
	printf("%.2f\n",t22.d);
	
	printf("=======\n");
	
	t31.x = 311;
	t31.d = 311.11;
	printf("%d\n",t31.x);
	printf("%.2f\n",t31.d);
	
	printf("=======\n");
	
	t32.x = 322;
	t32.d = 322.22;
	printf("%d\n",t32.x);
	printf("%.2f\n",t32.d);
	 
	return 0;
}
