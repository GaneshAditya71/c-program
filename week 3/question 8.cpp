#include<stdio.h>
int main()
{
 	int n,count=0;
 	printf("enter a positive integer :");
 	scanf("%d",&n);
 	
 	do
 	{
 		n/=10;
 		++count;
 	}while(n!=0);
 	printf("length=%d",count);
	return(0);
}
