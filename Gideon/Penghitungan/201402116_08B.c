/* * * * * * * * * * * * * * * * * * * * 
 * Nama File : 201402116_08B.c         *
 * Simulasi pelemparan koin            *
 * * * * * * * * * * * * * * * * * * * */

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int sisi(int x)
{
    int muka = 0,random,kembar = 0,temp,help = 1,belang =0,belang_terbanyak = 0;
    
    srand(time(NULL));
    
    for(int i=1 ; i <= x; i++)
    {
        random = rand() % 2;
        printf("%d",random);
        
        //Mencari muka terbanyak (sisi muka kembar yang terbanyak)
        if(random == 1)
        {
            muka++;
            if(i == x)
            {
                if(muka > kembar)
                {
                kembar = muka;
                }
            }
        }else 
        {
            if(muka > kembar)
            {
                kembar = muka;
            }
            muka = 0;
        }
        
        
        //mencari sisi belang pola muka belakang terpanjang(101010...)
        if(help == 1)
        {
            if(random == 1)
            {
                temp = 1;
                help--;
            }
        }
        else
        {
        if(random != temp)
        {
            belang++;
            temp = random;
            if(i == x)
            {
                if(belang > belang_terbanyak)
                {
                    belang_terbanyak = belang;
                }
            }
        }
        else
        {
            if(random == 1)
            {
                temp = 1;
                help--;
            }
            if(belang > belang_terbanyak)
            {
                belang_terbanyak = belang;
            }
            help++;
            belang = 0;
        }
        }
    }
    printf("\nPola Muka terpanjang : %d  \nPola belang muka belakang (1010...) terpanjang : %d",kembar,(belang_terbanyak + 1) / 2);
}

int main()
{
    int x = 10;
    
    while(x <= 10000)
    {
        printf("Pola untuk panjang %d : \n",x);
        sisi(x);
        x *= 10;
        printf("\n\n\n\n\n");
    }
    
}