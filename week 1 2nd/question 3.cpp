#include<stdio.h>
int main()
{
	int a;
	double b;
	printf("enter the radius of circle:");
	scanf("%d",&a);
	
	b=3.14*a*a;
	printf("area of circle is %lf",b);
	
	return 0;
}