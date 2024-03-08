#include "stdio.h"

int main(void){
	int a=10;
	int b=10;
	int *p1;
	int *p2;
	
	p1=&a;
	p2=&b;
	
	int sum = *p1 + *p2;
	printf("Gia tri cua tong = %d ",sum);
}
