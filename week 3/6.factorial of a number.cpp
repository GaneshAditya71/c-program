#include<stdio.h>
int main()
{
 	int i,n,fact;
 	printf("enter the value :");
 	scanf("%d",&n);
 	
 	if(n<0)
 	printf("your given value cannot have factorial as it is less than 0");
 	
 	else
 	{
 		for(i=1;i<=n;i++)
 		{
 			fact *= i;
		}
	printf("factorial = %d",fact);
	}
	return(0);
}
