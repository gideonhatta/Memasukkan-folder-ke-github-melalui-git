#include<stdio.h>

int ctDigit(int);

int main()
{
    int bil, dgt;

    printf("Berikan sebuah bilangan: ");
    scanf("%d", &bil);
    dgt = ctDgt(bil);
    printf("Jumlah digit %d-%d\n", bil, dgt);

    return 0;
}

int ctDigit(int bil){
    if(bil / 10 != 0){
        return 1 + ctDigit(bil / 10 );
    }
    return 1;
}