Nama File : 201402116_c
Mempertukarkan nilai duah bilangan tanpa menggunakan variabel tambahan sementara */

#include <stdio.h>
int main()
{
	int a, b;

	printf("Masukkan nilai a :");
	scanf("%d", &a);
	printf("Masukkan nilai b :");
	scanf("%d", &b);

	a= a*b;
	b= a/b;
	a= a/b;

	printf("a = %d \n", a);
	printf("b = %d", b);
	return 0;
}