#include <stdio.h>

typedef struct contact{
	char *tel,*email,*addr;
}Contact;

typedef struct score{
	int kor;
	int eng;
	int math;
	int total;
	double avg;
}Score;

struct Student{
	char *name;
	Score s;
	Contact ctt;//tel,email,addr
	
};
int main(int argc, char **argv){
	
	
	printf("inner struct  \n");
	
	typedef struct Student STD;
	
	STD st = {
		"KIM",
		{99,88,77,99+88+77,(99+88+77)/3.0},
		{"010","aaa@aaa.com","seoul"}
	};
	
	printf("%s",st.name);
	printf("%5d%5d%5d%5d%10.2f\n",
				st.s.kor,
				st.s.eng,
				st.s.math,
				st.s.total,
				st.s.avg);
	printf("%s %s %s",
				st.ctt.tel,
				st.ctt.email,
				st.ctt.addr);			
	 
	return 0;
}
