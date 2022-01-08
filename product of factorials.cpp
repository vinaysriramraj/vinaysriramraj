#include<stdio.h>
int main()
{
	int b,i;
	printf("enter a number \n");
	scanf("%d" ,&i);
	printf("enter a number \n");
	scanf("%d" ,&b); 
	while(i<=b)  
	{
		if(i%2!=0)    
		{
		printf("%d" ,i);
		printf(" "); 	
		}
		i++;
	}	
} 
