#include<stdio.h>
int main()
{
	int a;
	printf("enter the value in kilometers:");
	scanf("%d",&a);
	
	printf("in meters:%d\n",a*1000);
	printf("in centimeters:%d\n",a*100000);
	printf("in millimeters:%d\n",a*1000000);
	
	return(0);
}
