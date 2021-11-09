/* * * * * * * * * * * * * * * * * * * * * * *  * 
* Nama File : ptr.c                             *
* Program C untuk menghitung akar-akar          *
* real persamaan kuadrat: ax^2 + bx + c = 0     *
* x1,x2 = (-b +/-sqrt(b^2 -4ac))/2a             *
* dan diskriminan dalam bentuk variabel pointer *                          
* * * * * * * * * * * * * * * * * * * * * * * * */  

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1_x2a, x1_x2b, D, *diskriminan;

    printf ("persamaan kuadrat yang ingin dicari nilai akar-akar realnya dimana:\n");
    printf ("a = ");
    scanf ("%d", &a);
    printf ("b = ");
    scanf ("%d", &b);
    printf ("c = ");
    scanf ("%d", &c);

    D = (b * b) - (4 * a * c);
    diskriminan = &D;

    x1_x2a = (-b + sqrt(*diskriminan)) / (2 * a);
    x1_x2b = (-b - sqrt(*diskriminan)) / (2 * a);

    if (D > 0);
    {
        printf ("Maka akar akar real persamaan kuadrat di atas ialah ");
        printf ("%.2f dan %.2f", x1_x2a, x1_x2b);
    }
     if (D < 0)
    {
        printf ("tidak memiliki akar real (akar imajiner)");
    }
    else
    {
        printf ("Memiliki akar kembar\n");
        printf ("Maka akar real persamaan kuadrat di atas ialah ");
        printf ("%.2f dan %.2f", x1_x2a, x1_x2b);
    }

    return 0;
}
