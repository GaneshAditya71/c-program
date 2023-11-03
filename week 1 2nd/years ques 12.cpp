#include<stdio.h>
int main()
{
	int a,b,n;
	
	printf("enter the number of days:");
	scanf("%d",&n);
	
	a=n%365;
	b=n/365;
	printf("%d years and %d days",b,a);
	
	return 0;
}