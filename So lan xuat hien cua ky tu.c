#include <stdio.h>
#include <string.h>

int countchar(char *str,char c);
int main()
{
    char str[100];
    char c ='l';
    printf("Nhap chuoi cua ban:");
    fgets(str,sizeof(str),stdin);
    printf("Chuoi cua ban vua nhap la: %s",str);
    printf("So lan xuat hien cua ky tu '%c' la %d",c,countchar(str,c));

    return 0;
}

int countchar(char *str,char c){
    char *p=str;
    int count=0;
    while(*p != '\0'){
        if(*p==c){
            count++;
        }
        *p++;
    }
    return count;
}
