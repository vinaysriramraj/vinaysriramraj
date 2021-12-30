#include<stdio.h>
main()
{
	int a,b,c;
	printf ("enter 3 numbers");
	scanf ("%d%d%d",&a,&b,&c);
	//1 11 111
	if (a>b && a>c)
	{
		printf ("%d",a);
	}
	else  if (b>a && b>c)
	{
		printf ("%d",b);
	}
	if (c>a && c>b)
	{
		printf ("%d",c);
    }
}
