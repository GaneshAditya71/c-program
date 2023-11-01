#include<stdio.h>
int main()
{
 	int i,n,mult;
 	printf("enter a positive integer : ");
 	scanf("%d",&n);
 	
 	for(i=1;i<=10;i++)
 	{
 		mult = n*i;
 		printf("%d*%d=%d \n",n,i,mult);
	}
	
	return(0);
}
