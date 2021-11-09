/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* Nama File : 201402116_03B.c                                              *
* Menghitung Apakah Satu Tahun Tertentu Merupakan Tahun Kabisat atau Bukan *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

int main()
{

    unsigned int tahun;

    printf("Memeriksa Apakah Satu Tahun Tertentu Merupakan Tahun Kabisat atau Bukan\n");
    printf("Tuliskan tahun yang ingin diketahui apakah tahun kabisat atau bukan: ");
    scanf("%d", &tahun);

    /* Jika tahun itu habis dibagi 400 maka merupaka tahun kabisat. */
    if(tahun%400 == 0)
    {
        printf("Tahun %d merupakan tahun kabisat. \n", tahun);
    }

    /*Jika tahun itu tidak habis dibagi 400, tetapi habis dibagi 100. *
    *Maka, tahun itu bukan merupakan tahun kabisat.                   */
   else if (tahun%100 == 0)
   {
        printf("Tahun %d bukan merupakan tahun kabisat.\n", tahun);
   }

   /*Jika tahun itu tidak habis dibagi 100, tetapi habis dibagi 4. *
    *Maka, tahun itu merupakan tahun kabisat.                      */
    else if (tahun%4 == 0)
    {
    printf("Tahun %d merupakan tahun kabisat.\n", tahun);
    }

    /*Selain pernyataan di atas, maka bukan tahhun kabisat. */
    else
    {
        printf("Tahun %d bukan merupakan tahun kabisat.\n", tahun);
    }

    return 0;

}
