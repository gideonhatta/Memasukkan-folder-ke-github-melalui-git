#include<stdio.h>

int ctDigit(int);

int main()
{
    int bil, dgt;

    printf("Berikan sebuah bilangan: ");
    scanf("%d", &bil);
    dgt = ctDigit(bil);
    printf("Jumlah digit %d-%d\n", bil, dgt);

    return 0;
}

void main(){
    // membuat array kosong
    int nilai [5];
    
    //mengisi array
    printf("Nilai ke-1: %d\n", nilai[0]);
    printf("Nilai ke-2: %d\n", nilai[1]);
    printf("Nilai ke-3: %d\n", nilai[2]);
    printf("Nilai ke-4: %d\n", nilai[3]);
    printf("Nilai ke-5: %d\n", nilai[4]);
    
    // mencetak isi array dengan perulangan
    for(int i; i < 5; i++){
        printf("Nilai ke-1: %d\n", nilai[i]);
    }
}