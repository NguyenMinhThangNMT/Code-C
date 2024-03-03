#include "stdio.h"
#include "conio.h"

int main(void){
	int size,arr[10];
	int *ptr1;
	int *ptr2;
	
	printf("Nhap gia so luong cua mang \n");
	scanf("%d",&size);
	
	printf("nhap phan tu thu cho mang \n");
	for(int i ; i<size;i++){
		printf("nhap phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	} 
	ptr1 =&arr[0];
	ptr2=&arr[size-1];
	
	printf("Hien thi cac phan tu trong mang thuan : \n");
	for(int i=0;i<size;i++){
		printf("arr[%d] = %d \n",i,*ptr1);
		ptr1++;
	}
	
	printf("Hien thi cac phan tu trong mang nghich : \n");
	for(int i=size-1 ; i>=0 ; i--){
		printf("arr[%d] = %d \n",i,*ptr2);
		ptr2--;
	}
	
	return 0;
}
