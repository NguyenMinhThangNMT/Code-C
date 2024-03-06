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
    
    Mangtangdan(arr,n);
    printf("Mang theo thu tu tang dan la :");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    

    return 0;
}

void Mangtangdan(int arr[],int n){
    int i,j,temp;
    
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
