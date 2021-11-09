# include <stdio.h>
int main()
{
	 int n,i,jlh;
	 printf("Masukkan bilangan :");
	 scanf("%d", &n);
	  i=0;
	  jlh=0;
	  while (i<=n)
		  {
			  jlh=jlh+i;
			  i=i+2;
			  }
			 printf("jlh=%d\n", jlh);
			  return 0;
}