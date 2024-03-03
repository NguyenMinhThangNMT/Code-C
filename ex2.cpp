#include "stdio.h"
#include "conio.h"

int string_len(char*);

int main(){
	char str[50];
	int length;
	
	printf("\nNhap chuoi vat ky");
	gets(str);
	
	length=string_len(str);
	
	printf("\Do dai choi %s la :%d",str,length);
	
} 
int string_len(char *p){
	int count=0;
	while(*p != '\0'){
		count++;
		p++;
	}
	return count;
}
	
