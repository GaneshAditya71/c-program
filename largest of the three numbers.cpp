/*This program is used to find out the largest of the three numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers:");
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	if (a>b && a>c)
	printf("Biggest number is %d",a);
	if (b>a && b>c)
	printf("Biggest number is %d",b);
	if (c>a && c>b)
	printf("Biggest number is %d",c);
	return (0);
}
