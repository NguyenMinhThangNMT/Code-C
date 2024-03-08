#include "stdio.h"
void swap(int *p1,int *p2){
	int temp;
	temp = *p1;
	*p1=*p2;
	*p2=temp;
}
int main(){
	int a = 10;
	int b = 5;
	printf("a = %d va b = %d \n",a,b);
	
	swap(&a,&b);
	printf("a = %d va b = %d \n",a,b);
	
	return 0;	
}
