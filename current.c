#include<stdio.h>
main()
{
	int unit;
	float amt,surcharg=0,na;
	printf("enter the units");
	scanf("%d",&unit);
	if (unit<200)
	{
		amt=unit*1.20;
		printf("NET AMOUNT=%f",amt);
	}
	else if (unit>=200 && unit<400)
	{
		amt=unit*1.50;
		printf("NET AMOUNT=%f",amt);
	}
	else if (unit>=400 && unit<600)
	{
		amt=unit*1.80;
		printf("amount=%f",amt);
		
	}
	else 
	{
		amt=unit*2.00;
		printf("amount=%f",amt);
	}
	if(amt>400)
	{
	surcharg=amt*15/100;
	printf("\nSurcharge=%f",surcharg);
	na=amt+surcharg;
	printf("\nNet amount=%f",na);
    }
}
