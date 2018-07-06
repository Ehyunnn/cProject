/*
 * 임의의 두점의 좌표를 각각 입력받아서
 * 두점간의 거리를 측정하는 프로그램을 작성하시오.
 * 한점의 정보는 구조체로 작성할것.
 */
#include <stdio.h>
#include <math.h>
struct Point{
	int x;
	int y;
};
int main(int argc, char **argv){
	struct Point p1,p2;
	double distance;
	printf("x1,y1:");
	scanf("%d %d",&p1.x,&p1.y);
	printf("x2,y2:");
	scanf("%d %d",&p2.x,&p2.y);
	distance = sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));	
	printf("distance %.2f\n",distance);
	return 0;
}

