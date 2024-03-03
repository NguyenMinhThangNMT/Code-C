#include"stdio.h"

//scanf("%d",&a[i])  <=>  scanf("%d",a+i)
//printf("%d ",a+i); <=>  printf("%d ",*a+i);

int main(){
	int a[3];
	int i;
	for(i = 0 ; i < 3 ; i++){
		scanf("%d",a+i);
	}
	
	for(i = 0 ; i < 3 ; i++){
		printf("%d ",*a+i);
	}
	return 0;
}
