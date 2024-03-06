#include <stdio.h>


struct SV{
    char mssv[100];
    char hoten[100];
    int    diem;
};



int main()
{
    struct SV sv1;
    printf("Nhap ma so sinh vien: ");
    fgets(sv1.mssv,sizeof(sv1.mssv),stdin);
    
    printf("Nhap ho ten sinh vien: ");
    fgets(sv1.hoten,sizeof(sv1.hoten),stdin);
    
    printf("Nhap diem sinh vien: ");
    scanf("%d",&sv1.diem);
    
    printf("Thong tin sinh vien: \n");
    printf("MSSV : %s",sv1.mssv);
    printf("Ho va ten : %s",sv1.hoten);
    printf("Diem so : %d",sv1.diem);
    
    

    return 0;
}
