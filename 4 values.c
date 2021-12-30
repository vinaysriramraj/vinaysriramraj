#include<stdio.h>
main()
{
	int a,b,c,d;
	printf ("enter 4 values");
	scanf ("%d%d%d%d",&a,&b,&c,&d);
	if (a>b && a>c && a>d)
	{
		printf ("%d",a);
	}
	if (b>a && b>c && b>d)
	{
		printf ("%d",b);
	}
	if (c>a && c>b && c>d)
	{
		printf ("%d",c);
	}
	if (d>a && d>b && d>c)
	{
		printf ("%d",d);
	}
}
