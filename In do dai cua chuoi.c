#include <stdio.h>
#include <string.h>
int countchar(char *p);
int main()
{
    char str[100];
    printf("Nhap chuoi cua ban:");
    fgets(str,sizeof(str),stdin);
    
    printf("Chuoi cua ban la: %s",str);
    int len=countchar(str);
    printf("Do dai chuoi cua ban la : %d",len);

    return 0;
}

int countchar(char *p){
    int len =0;
    while(*p != '\0'){
        len++;
        p++;
    }
    return len;
}
