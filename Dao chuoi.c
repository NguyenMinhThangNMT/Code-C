#include <stdio.h>
#include <string.h>

char* Invertstring(char *str);
int main()
{
    char str[100];
    printf("Nhap chuoi cua ban:");
    fgets(str,sizeof(str),stdin);
    printf("Chuoi cua ban nhap la: %s",str);
    printf("Chuoi sau khi duoc dao: %s",Invertstring(str));
    return 0;
}

char* Invertstring(char *str){
    char *ptemp;
    int leng=strlen(str);
    int i=0;
    ptemp=(char*)malloc(leng+1);
    memset(ptemp,NULL,leng+1);
    while(i<leng){
        *(ptemp +i)=*(str+leng-1-i);
        i++;
    }
    *(ptemp+i)='\0';
    return ptemp;
    
}
