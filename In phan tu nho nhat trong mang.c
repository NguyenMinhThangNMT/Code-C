#include <stdio.h>

int main()
{
    int arr[100];
    int n,i;
    
    printf("Nhap so luong phan tu trong mang :");
    scanf("%d",&n);
    
    printf("Nhap gia tri cua cac phan tu : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     
    printf("Gia tri nho nhat cua mang la : %d ",minvalue(arr,n));
    return 0;
}

int minvalue(int arr[],int len){
    int temp = arr[0];
    int i;
    for(i=0;i<len;i++){
        if(temp>arr[i]){
            temp=arr[i];
        }
    }
    return temp;
}
