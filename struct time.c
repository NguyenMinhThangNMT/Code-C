#include <stdio.h>


struct Time{
    int day;
    int month;
    int year;
};

void setuptime(struct Time *t){
    printf("Nhap ngay:");
    scanf("%d",&t->day);
    printf("Nhap thang:");
    scanf("%d",&t->month);
    printf("Nhap nam:");
    scanf("%d",&t->year);
}

void displaytime(struct Time t){
    printf("Time : %.2d / %.2d / %d",t.day,t.month,t.year);
}

int main()
{
    struct Time t1;
    setuptime(&t1);
    displaytime(t1);

    return 0;
}
