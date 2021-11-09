/*Nama file: dectobin.c2Mengkonversi bilangan bulat ke biner*/
# include <stdio.h>
int main()
{
    int n,hsl,sisa;
    printf("Masukkan bilangan :");
    scanf("%d", &n);
    hsl=0;
    while (n>0)
    {
        sisa=n%10;
        hsl=(hsl*10) + sisa;
        n=n/10;
    }
    printf("hsl=%d\n", hsl);
    return 0;
    }