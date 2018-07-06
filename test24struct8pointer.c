#include <stdio.h>
typedef struct member{
	int num;
	char *id;
	char *pw;
	char *name;
	char *tel;
}MEMBER;

void test(MEMBER m);
void test2(MEMBER *pt_m);
int main(int argc, char **argv){
	
	
	printf("pointer struct  \n");
	
	MEMBER m, *pt_m;
	pt_m = &m;
	
	m.num = 1;
	m.id = "admin";
	m.pw = "hi123456";
	m.name = "KIM";
	m.tel = "010";
	
	
	pt_m->num = 22;
	pt_m->id = "admin22";
	pt_m->pw = "hi2222";
	pt_m->name = "KIM22";
	pt_m->tel = "022";
	
	
	printf("===============================\n");
	printf("%d %s %s %s %s\n",
				m.num,
				m.id,
				m.pw,
				m.name,
				m.tel);
	
	
	printf("===============================\n");
	printf("%d %s %s %s %s\n",
				(*pt_m).num,
				(*pt_m).id,
				(*pt_m).pw,
				(*pt_m).name,
				(*pt_m).tel);
				
	printf("===============================\n");
	printf("%d %s %s %s %s\n",
				pt_m->num,
				pt_m->id,
				pt_m->pw,
				pt_m->name,
				pt_m->tel);
	
	printf("===============================\n");
	printf("m : %d\n",sizeof(m));
	printf("pt_m : %d\n",sizeof(pt_m));
	
	test(m);//20byte
	test2(&m);//4byte
	
	return 0;
}

void test(MEMBER m){
	printf("%d %s %s %s %s\n",
				m.num,
				m.id,
				m.pw,
				m.name,
				m.tel);
}

void test2(MEMBER *pt_m){
	printf("===============================\n");
	printf("%d %s %s %s %s\n",
				(*pt_m).num,
				(*pt_m).id,
				(*pt_m).pw,
				(*pt_m).name,
				(*pt_m).tel);
				
	printf("===============================\n");
	printf("%d %s %s %s %s\n",
				pt_m->num,
				pt_m->id,
				pt_m->pw,
				pt_m->name,
				pt_m->tel);
}
