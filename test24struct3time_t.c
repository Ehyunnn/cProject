#include <stdio.h>
#include <time.h>
void printTime();
void printLocalTime();

int main(int argc, char **argv){
	
	
	printf("time_t  \n");
	printf("==========\n");
	printTime();
	printf("==========\n");
	printLocalTime();
	printf("==========\n");
	 
	return 0;
}
void printTime(){
	time_t time_now;
	time_now = time(NULL);
	
	printf("time_now: %ld\n",time_now);
}

void printLocalTime(){
	time_t time_now;
	
	struct tm *pt_time;
	time(&time_now);
	pt_time = localtime(&time_now);
	
	printf("asctime: %s\n",asctime(pt_time));
}
