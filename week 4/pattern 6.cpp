#include<stdio.h>
int main()
{
 	int i,n,j,s;
 	printf("enter the number of rows:");
 	scanf("%d",&n);
 	
 	for(i=1;i<=n;i++)
 	{
 		for(s=1;s<=i-1;s++)
 		{
 			printf(" ");
		 }
 		for(j=1;j<=((n-i)*2)+1;j++)
 		{
 			printf("*");
		 }
		 printf("\n");
	}
	return 0;
}
