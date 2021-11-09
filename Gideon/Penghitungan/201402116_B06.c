/* * * * * * * * * * * * * * * * * * * * * * * * * *
 * Nama File : 201402116_06B.c                     *
 * Menghitung bilangan acak                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * */  
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 100
int main ()
{
    int i, n;
    
    int bil, jlh=0, status; 
    
    char jwb;

    printf ("Contoh pengulangan for \n");
    printf ("Berikan sebuah bilangan bulat: ");
    scanf ("%d", &n);
    
    printf ("Bilangan acak yang ditebak. \n");
    printf ("Berikan s jika selesai. \n");
    status = scanf("%d", &bil);
    while(status > 1)
    
    {
        printf ("Bilangan bulat berikutnya");
        status = scanf("%d", &bil);
    }
    
    srand(time(NULL));
    
    for (i=0; i<N; i++)
    {
         rand () %N;
        printf("%d ", i);
    }
    printf ("\n");
    
    do
    {
        printf ("Jawab y atau t: ");
        jwb = getchar ();
        fflush (stdin);
    }
    
    while (tolower(jwb) != 'y' && tolower (jwb) !='t');
    printf ("Terimakasih telah bermain tebak angka.\n, jwb");
    
    return 0;
}

