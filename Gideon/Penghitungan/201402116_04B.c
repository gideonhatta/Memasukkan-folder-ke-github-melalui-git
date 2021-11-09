/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
* Nama File : 201402116_04B.c                                                         *
* Menghitung berapa lama sejak tanggal kelahiran Saudara hingga satu tanggal tertentu *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ** * * */

#include <stdio.h>

int main()
{
    int tangganl_lahir = 11, bulan_lahir = 8, tahun_lahir = 2002;
    int jumlah_hari    = 31, jumlah_bulan = 12;
    int tanggal, bulan, tahun, kabisat, hasil1, hasil2, hasil3;

    printf("Menghitung Berapa Lama Sejak Tanggal Lahir Hingga Ke Suatu Tanggal Tertentu\n");
    printf("\n");
    printf("Tanggal Lahir :\n");
    printf("Tanggal = %d\n", tangganl_lahir);
    printf("Bulan = %d\n", bulan_lahir);
    printf("Tahun = %d\n", tahun_lahir);
    printf("\n");

    /* Masukkan tanggal berapa */
    printf("Masukkan tanggal :\n");
    printf("Tanggal(1-31) = ");
    scanf("%d", &tanggal);
    printf("Bulan(1-12) = ");
    scanf("%d", &bulan);
    printf("Tahun(>= 2002) = ");
    scanf("%d", &tahun);
    printf("\n");

    /* Mencari lama hari yang telah dilewati */
    if (tanggal < tangganl_lahir)
    {
        hasil1 = (tanggal - tangganl_lahir) + jumlah_bulan;
        ++ bulan_lahir;
    }
    else
    {
        hasil1 = tanggal - tangganl_lahir;
    }

    /* Mencari lama bulan dan tahun yang dilalui */
    if (bulan < bulan_lahir)
    {
        hasil2 = (bulan - bulan_lahir) + jumlah_bulan;
        ++tahun_lahir;
        hasil3 = tahun - tahun_lahir;
    }
    else
    {
        hasil2 = bulan - bulan_lahir;
        hasil3 = tahun - tahun_lahir;
    }

    /* Mencari banyak tahun kabisat yang dilalui */
    kabisat = (tahun % )

    printf("Lama hari yang telah dilalui sebanyak %d hari.\n", hasil1);
    printf("Lama bulan yang telah dilalui sebanyak %d bulan.\n", hasil2);
    printf("Lama tahun yang telah dialui sebanyak %d tahun.\n", hasil3);
    printf("Jumlah lama tahun, bulan, hari yang telah dilalui adalah selama %d tahun, %d bulan, dan %d hari.\n"),
    printf("\n");
    printf("Tahun kabisat yang telah dilalui adalah sebanyak %d kali.\n", kabisat);

    return 0;
}