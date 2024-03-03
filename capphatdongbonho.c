#include "stdio.h"

int main(){
	//datatype *pointerName = (type_cast*)malloc(size_of_byte);
	//Xin cap phat dong mang 1 trieu phan tu int
	int *ptr = (int *)malloc(1000000*sizeof(int));
	if(ptr==NULL){
		printf("Memory not allocated");
	}
	
	int i;
	for(i =0;i<5;i++){
		scanf("%d",ptr+i);
	}
	for(i =0;i<5;i++){
		printf("%d ",*ptr+i);
	}
	//giai phong bo nho
	free(ptr);
	return 0;
}
