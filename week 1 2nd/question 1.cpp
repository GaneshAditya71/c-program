#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	double f;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("sum is :%d\n",c);
	printf("difference is :%d\n",d);
	printf("multiplication is :%d\n",e);
	printf("division is :%lf \n",f);
	
	return 0;
}