#include <stdio.h>

int main()
{
    int MAX;
    int a,b,c,d;
    printf("Nhap a:");
    scanf("%d",&a);
    printf("Nhap b:");
    scanf("%d",&b);
    printf("Nhap c:");
    scanf("%d",&c);
    printf("Nhap d:");
    scanf("%d",&d);
    MAX=Maxvalue(Maxvalue(a,b),Maxvalue(c,d));
    printf("Gia tri lon nhat la:%d",MAX);
    

    return 0;
}
int Maxvalue(int x,int y){
    int max;
    if(x>y)max=x;
    else max=y;
    return max;
}
