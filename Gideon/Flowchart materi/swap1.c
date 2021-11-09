#include <stdio.h>
int main ()
{
	int a, b, t;

	printf("Berikan dua buah bilangan:\n");
	scanf("%d%d\n", &a, &b);
	t=a;
	a=b;
	b=t;
	printf("a=%d, b=%d\n", a, b);

	return 0;
}