#include<stdio.h>
int main()
{
 	int a,b,c;
 	printf("enter the sides of triangle");
 	scanf("%d %d %d",&a,&b,&c);
 	
 	if(a==b && a==c)
 	printf("it is equilateral triangle");
 	else if(a==b || b==c || c==a)
 	{
 		if(a==b && b==c)
 		printf("it is equilateral triangle");
 		else
 		printf("it is isosceles triangle");
	 }
	else
 	printf("it is scalene triangle");
 	
 	
	return 0;
}
