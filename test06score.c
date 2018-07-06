#include <stdio.h>

int main(int argc, char **argv)
{
	printf("score kor,eng,math,total,avg,grade\n");
	
	printf("input kor >>>");
	int kor;
	scanf("%d",&kor);
	printf("kor : %d\n", kor);
	
	printf("input eng >>>");
	int eng;
	scanf("%d",&eng);
	printf("eng : %d\n", eng);
	
	printf("input math >>>");
	int math;
	scanf("%d",&math);
	printf("math : %d\n", math);
	
	int total = kor + eng + math;
	printf("total : %d\n", total);
	
	double avg = total/3;
	printf("avg : %lf\n", avg);
	char grade = 'A';
	if(avg>=90){
		grade = 'A';
	}else if(avg>=80){
		grade = 'B';
	}else{
		grade = 'F';
	}
	
	printf("grade : %c\n", grade);
	
	return 0;
}

