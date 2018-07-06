#include <stdio.h>
struct list{
	int num;
	struct list *next;
};

int main(int argc, char **argv){
	
	
	printf("bit member field struct  \n");
	struct list a={10},b={20},c={30},d={40};
	
	printf("&a : %p\n",&a);
	printf("&b : %p\n",&b);
	printf("&c : %p\n",&c);
	printf("&d : %p\n",&d);

	printf("a.num : %d\n",a.num );
	printf("b.num : %d\n",b.num );
	printf("c.num : %d\n",c.num );
	printf("d.num : %d\n",d.num );
	
	a.next = &b;
	b.next = &c;
	c.next = &d;
	struct list *pt_first_list = &a;
	struct list *pt_head = &a;
	
	while(pt_first_list != NULL){
		printf("%d : %p\n", 
				pt_first_list -> num, pt_first_list );
		pt_first_list = pt_first_list -> next;
	}
	
	return 0;
}
