#include <stdio.h>
#include <time.h>
struct Student{
	char *pt_name;
	int kor;
	int eng;
	int math;
	int total;
	double avg;
} ;
typedef struct Member{
	int num;
	char *id;
	char *pw;
	char *name;
	char *tel;
	time_t time;
}MEM ;

int main(int argc, char **argv){
	
	
	printf("structure 구조체 : struct \n");
	//학생  구조체를 생성하고 난 후 
	//임의의 데이터들을 넣고 출력하시오.
	// 이름,국어,영어,수학,총점,평균 을 멤버로 하는 구조체.
	printf("==========\n");
	
	
	struct Student st;
	typedef  struct Student STD;
	STD stddd;
	st.pt_name = "KIM";
	st.kor = 99;
	st.eng = 87;
	st.math = 86;
	st.total = st.kor+st.eng+st.math;
	st.avg = st.total/3.0;
	printf("pt_name : %s\n",st.pt_name);
	printf("kor : %d\n",st.kor);
	printf("eng : %d\n",st.eng);
	printf("math : %d\n",st.math);
	printf("total : %d\n",st.total);
	printf("avg : %.2f\n",st.avg);
	printf("==========\n");
	
	struct Student st2 = {"yangssem",55,66,77,300,33.33};
	
	printf("pt_name : %s\n",st2.pt_name);
	printf("kor : %d\n",st2.kor);
	printf("eng : %d\n",st2.eng);
	printf("math : %d\n",st2.math);
	printf("total : %d\n",st2.total);
	printf("avg : %.2f\n",st2.avg);
	printf("==========\n");
	 
	//int x,y,z;
	struct Student st3,st4,st5; 
	 
	 
	struct Member sm1,sm2;
	sm1.num = 1;
	sm1.id = "admin";
	sm1.pw = "hi123456";
	sm1.name = "yangssem";
	sm1.tel = "010-0000-0000";
	printf("num: %d\n",sm1.num);
	printf("id: %s\n",sm1.id);
	printf("pw: %s\n",sm1.pw);
	printf("name: %s\n",sm1.name);
	printf("tel: %s\n",sm1.tel);
	
	
	MEM m1,m2,m3;
	m1.num = 2;
	m1.id = "admin2";
	m1.pw = "hi222222";
	m1.name = "yangssem22";
	m1.tel = "010-2222-2222";
	
	struct tm *pt_time;
	//m1.time = time(NULL);
	time(&m1.time);
	pt_time = localtime(&m1.time);
	printf("num: %d\n",m1.num);
	printf("id: %s\n",m1.id);
	printf("pw: %s\n",m1.pw);
	printf("name: %s\n",m1.name);
	printf("tel: %s\n",m1.tel);
	printf("time: %ld\n",m1.time);
	printf("time: %ld\n",pt_time);
	printf("time: %s\n",asctime(pt_time));
	 
	return 0;
}
