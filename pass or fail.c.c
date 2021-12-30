#include<stdio.h>
main()
{
	int m,p,c,cs;
	printf ("enter 4 values");
	scanf ("%d%d%d%d",&m,&p,&c,&cs);
	if (m>=35 && p>=35 && c>=35 && cs>=35)
	{
		printf ("pass");
	}
	else 
	{
		printf ("fail");
	}
}
