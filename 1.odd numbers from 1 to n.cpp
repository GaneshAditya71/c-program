#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	printf("the odd numbers from 1 to %d are : \n ",n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d \n",i);
		}
	}
	return(0);
}
