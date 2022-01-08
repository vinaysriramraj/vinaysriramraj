#include<stdio.h>
int main()
{
	int i,a,k=0;
	printf("enter a number");
	scanf("%d" ,&a); 
	for(i=1;i<=a;i++) 
	{
		if(a%i==0) 
		{
			k=k+1;
		} 
	}
	if(k==2)
		{
		printf("%d is prime ",a);	
		} 
	else
	{
	printf("%d is not a prime " ,a);
	}	
}

