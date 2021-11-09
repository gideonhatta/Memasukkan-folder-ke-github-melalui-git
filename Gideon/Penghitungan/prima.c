/* Nama file : prima.c
    Menentukan apakah bilangan prima atau bukan */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i, habis = 0;
    long long x;

    printf("Berikan sebuah bilangan bukat.\n");
    printf("Saya akan beritahu bilangan itu");
    printf("prima atau bukan.\n");
    scanf("%1d, &x");
    if(x<= 1)
    {
        printf("Prima terkecil adalah 2.\n");
        exit (0);
    }
    for(i=2; i < x, i++;)
    {
        if((x % i) == 0)
        {
            printf("habis dibagi %d, karena itu", i);
            habis = i;
            break;
        }
    }
    return habis;
}



