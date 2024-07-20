#include <stdio.h>
#include <stdint.h>

void setbit(uint32_t *reg, int bit) {
    if (bit >= 0 && bit < 32) {
        *reg |= (1 << bit);
    } else {
        printf("Couldn't set bit\n");
    }
}

void resetbit(uint32_t *reg, int bit) {
    if (bit >= 0 && bit < 32) {
        *reg &= ~(1 << bit);
    } else {
        printf("Couldn't reset bit\n");
    }
}

void checkbit(uint32_t *reg,int bit){
    if(bit>=0 && bit <32){
        int a=(*reg&(1<<bit))!=0;
        if(a){
            printf("Gia tri cua bit thu %d la %d (bit da duoc set)",bit,a);
        }
        else printf("Gia tri cua bit thu %d la %d (bit chua duoc set)",bit,a);
    }
}

int main() {
    uint32_t a = 10;
    printf("Value of a before setbit: %#010x\n",a);
    setbit(&a, 2);
    printf("Value of a after setbit : %#010x\n", a); 
    checkbit(&a,2);
    
    printf("\nValue of a before resetbit: %#010x\n",a);
    resetbit(&a, 2);
    printf("Value of a after resetbit : %#010x\n", a); 
    checkbit(&a,2);

    return 0;
}
