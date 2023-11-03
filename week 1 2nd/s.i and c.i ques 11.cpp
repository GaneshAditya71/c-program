#include<stdio.h>
#include<math.h>
int main()
{
	int si,ci,p,r,t,n;
	printf("principle :");
	scanf("%d",&p);
	printf("\nrate :");
	scanf("%d",&r);
	printf("\ntime :");
	scanf("%d",&t);
	
	si=(p*t*r/100)+p ;
	ci=(p*pow((1+r/100),t))+p;
	
	printf("final amount after simple interest is: %d",si);
	printf("\nfinal amount after compound interest is: %d",ci);
	return 0;
}