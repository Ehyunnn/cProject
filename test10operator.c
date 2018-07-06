#include <stdio.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
		printf("operator...");
	
		//1. ()  []   .   ->
	
		//2. (cast) *(pointer)  &  ++ -- +(양수)
		//  -(음수)   ~(보수)    !(부정)    sizeof
		int arr[] = {1,2,3,4,5};
		printf("int len : %d byte \n", sizeof(int));
		printf("arr len : %d byte \n", sizeof(arr));
		printf("arr len : %d \n", sizeof(arr)/sizeof(int));
		
		char name[] = "yangssem";
		printf("name len : %d byte \n", sizeof(name));
		char korname[] = "가나";
		printf("name len : %d byte \n", sizeof(korname));
	
		//3. 승제 *   /    %  가감 + - 
		
		//4. 쉬프트연산 <<    >>
		//4321  =====  0100  >> 2  : 0001
		//4321  =====  0100  << 2  : 1 0000
		printf("쉬프트연산  >> : %d\n", 4>>1);
		printf("쉬프트연산  >> : %d\n", 4>>2);
		
		printf("쉬프트연산  << : %d\n", 4<<1);
		printf("쉬프트연산  << : %d\n", 4<<2);
		
		//5. 비교  >   <   >=   <= 
		
		//6. 비교  ==   !=
		printf("비교 : %d\n",5==5);
		
		//#include <stdbool.h>
		bool b = true;
		printf("true : %d\n",b);
		b = false;
		printf("false : %d\n",b);
		
		//7. &
		int ten = 10;
		//long long llsu = 33333333;
//		printf("llsu : %lli\n",llsu);
		unsigned long long llsu = 33333333;
		printf("llsu : %llu\n",llsu);
		printf("ten : %d\n",ten);
		ten = 0xa;
		printf("ten : %d\n",ten);
		printf("ten : %x\n",ten);
		printf("ten : %c\n",ten);
		
		printf("ten : %x\n",ten&4);
		
		//8. ^
		
		//9. |
		
		//10. &&
		
		//11. ||
		//윤년  연도를 4로 나누어떨어지면 윤년
		//위에것을 100으로 나누어 떨어지지 않으면 윤년
		//400으로 나누어 떨어지며 윤년
		int year = 2017;
		if(((year%4==0) && (year%100!=0) )|| (year%400==0)){
				printf("윤년\n");
		}else{
				printf("평년\n");
		}
		
		int i;
		for(i=2017;i<2030;i++){
			if(((i%4==0) && (i%100!=0) )|| (i%400==0)){
				printf("윤년 %d\n",i);
			}else{
					printf("평년 %d\n",i);
			}
		}
		//12.   삼항  ?   : 
		
		//13. 대입연산   *= /= %= >>= <<= &= ^= |=  =
	
		//14.   ++  --  ,
	return 0;
}

