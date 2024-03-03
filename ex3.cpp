#include "stdio.h"
#include "conio.h"

int main(){
	int i;
	int arr[5];
	int *p;
	int size;
	int sum;
	
	printf("Nhap so luong phan tu cua mang : ");
	scanf("%d",&size);
	
	printf("Nhap cac phan cua mang \n");
	for(int i= 0;i<size;i++){
		printf("Nhap phan tu arr[%d] : ",i+1);
		scanf("%d",&arr[i]);
	}
	p=&arr[0];
	for (int i=0;i<size;i++){
		sum =sum+ *p;
		p++;
	}
	printf("Tong Sum = %d ",sum);
}
