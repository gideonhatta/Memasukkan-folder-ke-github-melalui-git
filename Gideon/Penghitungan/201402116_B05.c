/* Buatlah sebuah program untuk menampilkan
   bilangan positip dan genap, 0,
   positip dan ganjil, atau negatip
*/
#include <stdio.h>

int main()
{
    int a;
    printf ("Masukkan sebuah bilangan : ");
    scanf ("%d", &a);

    if (a  > 0)
    {
        printf ("Bilangan %d adalah positif dan genap. /n", a);
    }
    else
    {
        printf("Bilangan %d adalah positif dan genap. /n", a);
    }
    if (a == 0)
    {
        printf ("Bilangan %d adalah 0. /n", a);
    }
    if (a == 0)
    {
        printf ("Bilagan %d adalah positif dan ganjil atau negatif, /n", a);
    }
    else
    {
        printf ("Bilangan %d adalah ganjil atau negatif. /n", a);
    }
    
    return 0;
    
}