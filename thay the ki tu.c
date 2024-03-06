#include <stdio.h>
#include <string.h>

void thaythekytu(char *str,char c,char newc);
int main()
{
    char str[100];
    char c='e';
    char newc='a';
    printf("Nhap chuoi cua ban:");
    fgets(str,sizeof(str),stdin);
    printf("Chuoi cua ban vua nhap la: %s",str);
    thaythekytu(str,c,newc);
    printf("Chuoi sau khi thay the: %s",str);

    return 0;
}

void thaythekytu(char *str,char c,char newc){
    char *p=str;
    while(*p != '\0'){
        if(*p==c){
            *p=newc;
        }
        *p++;
    }
}
