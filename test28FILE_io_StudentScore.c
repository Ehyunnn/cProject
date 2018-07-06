#include <stdio.h>
#define nil NULL//nil == 0, NULL==0
#define MAX 2048
int main(int argc, char **argv){
	printf("FILE io fgets and stdin\n");
	// ./test28FILE_io_StudentScore
	// ./test28FILE_io_StudentScore <  test28studentScore.txt 
	// ./test28FILE_io_StudentScore <  test28studentScore.txt > test28stucentScoreResule.txt
	
	char data[MAX];
	char name[10];
	int kor,eng,math,total;
	double avg;
	int count=1;
	
	//printf("%p\n",fgets(data,MAX,stdin) );
	
	while(fgets(data,MAX,stdin) != NULL){
		if(sscanf(data, "%s%d%d%d",name,&kor,&eng,&math)==4){
			total = kor+eng+math;
			avg = total/3.0;
			printf("%d, %5s %5d %5d %5d %5d %.2f\n",
						count ,name, kor,eng,math,total,avg);
			count++;
		}else{
			fprintf(stderr,"Data Error:%s",data);
		}

	}

	return 0;
}
