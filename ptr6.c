#include "stdio.h"

//pass by value
void tang1(int b){
	b=+100;
}

//pass by reference
void tang2(int *b){
	*b +=100;
}

int main(void){
	int a=100;
	int c=100;
	tang1(a);
	printf("Gia tri cua a : %d \n",a);
	tang2(&c);
	printf("Gia tri cua c : %d \n",c);
}
