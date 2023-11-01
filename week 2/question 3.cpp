#include<stdio.h>
int main()
{
 	int a;
 	printf("enter the number of units:");
 	scanf("%d",&a);
 	
 	if (0<=a && a<=100)
 	printf("the bill is %d",a*5);
 	else if(100<a && a<=250)
 	printf("the bill is %d",a*10);
 	else if(a>250)
 	printf("the bill is %d",a*15);
 	else 
 	printf("you have given the wrong input please check again");
 	
 	
 	
	return 0;
}
