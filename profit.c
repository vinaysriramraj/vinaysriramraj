#include<stdio.h>
main()
{
	int cp,sp,p,l,r;
	printf("enter the cp and sp");
	scanf("%d%d",&cp,&sp);
	if(cp>sp)
	{
		p=cp-sp;
		r=p*100/cp;
		printf("loss of %d %%",r);
	}
	else if (cp<sp)
	{
		l=sp-cp;
		r=l*100/cp;
		printf("profit of %d %%",r);
	}
	else
		
	{
		printf("neither lose nor profit");
	}
}
