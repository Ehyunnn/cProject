#include <stdio.h>
/*
 * 주어진 학생 정보 소스코드를 이용하여
 * 성적(총점)의 오름차순으로 정렬하는 
 * 프로그램을 추가하시오.
 */
#define MAX 3
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
	SCORE s3 = {55,66,77,55+66+77,(55+66+77)/3.0};
	
	CONTACT ctt1 = {"010","aaa@aaa.com","seoul"};
	CONTACT ctt2 = {"02","bbb@bbb.com","pangyo"};
	CONTACT ctt3 = {"031","ccc@ccc.com","guri"};
	
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
	STUDENT st3 = {
		"CHOI",
		s3,
		ctt3
	};
	
	STUDENT st[MAX] = {
		st1,
		st2,
		st3
		};
	printf("===============================\n");
	
	
	int x,i;
	for(x=0;x<MAX;x++){
		for(i=x+1;i<MAX;i++){
			if(st[x].s.total>st[i].s.total){
				STUDENT temp;
				temp = st[x] ;
				st[x]  = st[i];
				st[i]  = temp;
			}
		}
	}
	
	
	for(i=0;i<MAX;i++){
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
