#include <stdio.h>

typedef struct contact{
	char *tel,*email,*addr;
}CONTACT;

typedef struct score{
	int kor;
	int eng;
	int math;
	int total;
	double avg;
}SCORE;

typedef struct student{
	char *name;
	SCORE s;
	CONTACT ctt;//tel,email,addr
	
}STUDENT;
int main(int argc, char **argv){
	
	
	printf("array struct  \n");
	
	SCORE s1 = {99,88,77,99+88+77,(99+88+77)/3.0};
	SCORE s2 = {33,44,55,33+44+55,(33+44+55)/3.0};
	
	CONTACT ctt1 = {"010","aaa@aaa.com","seoul"};
	CONTACT ctt2 = {"02","bbb@bbb.com","pangyo"};
	
	STUDENT st1 = {
		"KIM",
		s1,
		ctt1
	};
	STUDENT st2 = {
		"LEE",
		s2,
		ctt2
	};
	
	STUDENT st[2] = {
		st1,
		st2
		};
	printf("===============================\n");
	
	STUDENT temp;
	temp = st[0] ;
	st[0]  = st[1];
	st[1]  = temp;
	
	int i;
	for(i=0;i<2;i++){
		printf("%s",st[i].name);
		printf("%5d%5d%5d%5d%10.2f\n",
					st[i].s.kor,
					st[i].s.eng,
					st[i].s.math,
					st[i].s.total,
					st[i].s.avg);
		printf("%s %s %s\n",
				st[i].ctt.tel,
				st[i].ctt.email,
				st[i].ctt.addr);	
		printf("===============================\n");
	}		
	 
	return 0;
}
