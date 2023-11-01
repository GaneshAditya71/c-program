#include<stdio.h>
int main()
{
	int year,a,x;
	printf("Enter a year and a month number \n");
	scanf("%d %d", &year,&a);
	
	if ((year % 400) == 0)
	{
	printf("%d is a leap year \n", year);
	x=100;
	}
	else if ((year % 100) == 0)
	{
	printf("%d is not a leap year \n", year);
	x=200;
	}
	else if ((year %4) == 0)
	{
	printf("%d is a leap year \n", year);
	x=300;
	}
	else
	{
	printf("%d is not a leap year \n", year);
	x=400;
	}
	if(x==100 || x==300)
	{
		if(a==1)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==2)
		printf("number of days in %d year and %d month is 29",year,a);
		else if(a==3)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==4)
		printf("number of days in %d year and %d month is 30",year,a);
		else if(a==5)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==6)
		printf("number of days in %d year and %d month is 30",year,a);
		else if(a==7)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==8)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==9)
		printf("number of days in %d year and %d month is 30",year,a);
		else if(a==10)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==11)
		printf("number of days in %d year and %d month is 30",year,a);
		else if(a==12)
		printf("number of days in %d year and %d month is 31",year,a);
	}
	else if(x==200 || x==400)
	{
		if(a==1)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==2)
		printf("number of days in %d year and %d month is 28",year,a);
		else if(a==3)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==4)
		printf("number of days in %d year and %d month is 30",year,a);
		else if(a==5)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==6)
		printf("number of days in %d year and %d month is 30",year,a);
		else if(a==7)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==8)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==9)
		printf("number of days in %d year and %d month is 30",year,a);
		else if(a==10)
		printf("number of days in %d year and %d month is 31",year,a);
		else if(a==11)
		printf("number of days in %d year and %d month is 30",year,a);
		else if(a==12)
		printf("number of days in %d year and %d month is 31",year,a);
	}
	return (0);
}
